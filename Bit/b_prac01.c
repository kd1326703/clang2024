#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Skill_Num 4
#define Mob_Num 3
typedef unsigned int UNIT;

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
} Skill;

typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UNIT state;
} Spec;

typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skill_Num];
} Chara;

typedef struct {
	Spec sp;
	int rate;
} Mob;

enum BitState {
	Base = 0,
	Poison = 1 << 0,
	Sleep = 1 << 1,
	Paralysis = 1 << 2,
	Burn = 1 << 3,
	AtkDown = 1 << 5,
	Dead = 1 << 6,
	Atk_Skill = 1 << 7,
	AtkUp = 1 << 8,
	DefUp = 1 << 9,
	DeBuff = 0xff
};

int TurnCount = 0;

void DisplayStatus(Chara c);
//void ChangeFlag(UNIT* s);
//void ClearFlag(UNIT* s);

//전투 모드로 이동
void BattleMode(Chara* c, Mob m);
//전투 시 메뉴 표시
int DisplayMenu(void);
//스킬 사용 시 메뉴 표시
int SkillMenu(Chara c);
//공격측과 방어측의 파라미터를 사용한 공격 데미지 계산
int DamageCalc(Spec sp1, Spec sp2);
//전투모드 시의 체력 계산과 사망 판정
void BattleMessage(Spec sp1, Spec* sp2);

void ChangeFlag(UNIT* s);

void ClearFlag(UNIT* s);

main(int argc, char* argv[])
{
	srand(time(0));

	Chara chara = { "Hero", 2000, 200, 100, Base, 2000, 150,
		//"sk.name", type, usemp, effect
		{{"Heal HP", 0,50, 800},
		{"Attack UP", 1, 50, 120},
		{"Defend Up", 3, 50, 150},
		{"Heal States", 2, 20, 0}}
	};

	Mob mob[Mob_Num] = {
		{"Goomba1", 700, 150, 800, Poison | Atk_Skill, 30},
		{"Goomba2", 1500, 200, 200, Burn | Atk_Skill, 30},
		{"Boss", 5000, 200, 80, AtkDown | Atk_Skill, 10}
	};

	int num = rand() % Mob_Num;

	if (argc > 1) {
		num = atoi(argv[1]);
		if (num < 0 || num >= Mob_Num) {
			num = rand() % Mob_Num;
		}
	}

	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead) {
		printf("Game Over dead by %s\n", chara.sp.name);
	}

}

int DamageCalc(Spec sp1, Spec sp2)
{
	//부여 대미지 계산함수
	//첫번째 인수: Spec형 구조체 변수(공격)
	//두번째 인수: Spec형 구조체 변수(방어)
	//(대미지) = 공격측 Atk × (공격측 Atk ÷ 방어측 Def) + 공격측 Atk × 난수 0 ~ 0.5

	int damage;

	if ((sp1.state & AtkDown) && !(sp1.state & Atk_Skill)) {
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def) + sp1.atk * (rand() % 50) / 100.0;

	if (rand() % 100 == 99) {
		return 2 * damage;
	}
	return damage;
}

void BattleMessage(Spec sp1, Spec* sp2)
{
	int damage;
	TurnCount++;

	printf("%s's attack\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	
	printf("%d damage to %s \n\n", damage, sp2->name);

	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%s downed\n", sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m)
{
#define Damage_Poison 0.8
//#define Damage_Burn 0.9
	const float Damage_Burn = 0.9;
	//전투 모드 시 메시지 표시 이행
	//첫번째 인수: Chara형 구조체 주소값 (아군 캐릭터)
	//두번째 인수: Mob형 구조체 변수 (적 캐릭터)

	int command, skill;
	system("cls");
	DisplayStatus(*c);

	printf("%s appeared!\n", m.sp.name);

	while (1) {
		command = DisplayMenu();

		if (c->sp.state & Poison) {
			c->sp.hp *= Damage_Poison;
		}
		if (c->sp.state & Burn) {
			c->sp.hp *= Damage_Burn;
			c->mp *= Damage_Burn;
		}

		if (command == 1) {
			DisplayStatus(*c);
			if (TurnCount % 2 == 0) {
				BattleMessage(c->sp, &m.sp);
				if (m.sp.hp & Dead) {
					break;
				}
			}

			if (TurnCount % 2 == 1) {
				BattleMessage(m.sp, &c->sp);
				if (rand() % 100 < m.rate) {
					printf("Got bad state!\n");
					c->sp.state |= (m.sp.state & ~Atk_Skill);
				}

				if (c->sp.state & Dead) {
					break;
				}
				else {
					DisplayStatus(*c);
				}
			}
		}
		else if (command == -1) {
			c->sp.state |= Dead;
			return;
		}
		else if (command == 2) {
			printf("Choose Skill\n");
			skill = SkillMenu(*c);

			if (c->mp >= c->skl[skill].use_mp) {
				c->mp -= c->skl[skill].use_mp;

				switch (c->skl[skill].type) {
				case 0:
					c->sp.hp += c->skl[skill].effect;
					if (c->sp.hp > c->maxhp) { c->sp.hp = c->maxhp; }
					
					printf("Heal %d HP!\n", c->skl[skill].effect);
					break;

				case 1:
					c->sp.atk += c->skl[skill].effect / 100.0;
					c->sp.state |= AtkUp;

					printf("Attack up!\n", c->skl[skill].effect);
					break;

				case 2:\
					//하위 8비트 디버프 플래그만 으로 설정
					//~debuff:1111 1111 1111 1111 1111 1111 0000 0000
					c->sp.state &= ~DeBuff;

					printf("Heal bad status!\n", c->skl[skill].effect);
					break;

				case 3:
					c->sp.def *= c->skl[skill].effect / 100.0;
					c->sp.state |= DefUp;
					c->mp -= c->skl[skill].use_mp;

					printf("Defend up!\n", c->skl[skill].effect);
					break;


				default:
					break;
				}
				DisplayStatus(*c);
			}
			else { printf("No MP\n"); }
		}
		else if (command == 3) {
			if (rand() % 100 < 20) {
				printf("Sussecced to run\n");
				return 0;
			}
			else {
				printf("Failed to run\n");
			}
		}
	}
}

void DisplayStatus(Chara c)
{
	printf("*********************\n");
	printf("HP: %-4d   MP: %-3d\n", c.sp.hp, c.mp);

	if (c.sp.state) {
		printf("State: ");
		if (c.sp.state & Poison) { printf("Poison\n"); }
		if (c.sp.state & Sleep) { printf("Sleep\n"); }
		if (c.sp.state & Paralysis) { printf("Paralysis\n"); }
		if (c.sp.state & Burn) { printf("Burn\n"); }
		if (c.sp.state & AtkUp) { printf("AtkUp\n"); }
		if (c.sp.state & DefUp) { printf("DefUp\n"); }
		if (c.sp.state & AtkDown) { printf("AtkDown\n"); }
	}
	printf("*********************\n");
}

void ChangeFlag(UNIT* s)
{
	int a;

	while (1) {
		printf("Which state do you want?\n");
		printf("1: Poison, 2: Sleep, 3: Paralysis, 4: Burn, 5: Atk up, 6: Atk down, 0:Exit : ");
		scanf("%d", &a);
			if (a == 0) {break;}

		switch (a) {
			case 1:
				*s |= Poison; break;
			case 2:
				*s |= Sleep; break;
			case 3:
				*s |= Paralysis; break;
			case 4:
				*s |= Burn; break;
			case 5:
				*s |= AtkUp; break;
			case 6:
				*s |= AtkDown; break;
			default:
				break;
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;

	while (1) {
		printf("Which state do you release?\n");
		printf("1: Poison, 2: Sleep, 3: Paralysis, 4: Burn, 5: Atk up, 6: Atk down, 7: All, 0:Exit : ");
		scanf("%d", &a);

		if (a == 0) {
			break;
		}

		switch (a) {
		case 1:
			*s &= ~Poison; break;
		case 2:
			*s &= ~Sleep; break;
		case 3:
			*s &= ~Paralysis; break;
		case 4:
			*s &= ~Burn; break;
		case 5:
			*s &= ~AtkUp; break;
		case 6:
			*s &= ~AtkDown; break;
		case 7:
			*s &= 0; break;
		default:
			break;
		}
	}
}

int DisplayMenu(void)
{
	char ch;

	while (1) {
		printf("----------Select command\n");
		printf("1. Fight\n2. Skill\n3. Run\n\n");
		ch = getch();
		if (ch > '0' && ch < '4') {
			return ch - '0';
		}
		else if (ch == 'q') {
			return -1;
		}
	}
}

int SkillMenu(Chara c)
{
	int i, ch;

	while (1) {
		printf("----------\nChoose skill\n");
		for (i = 0; i < Skill_Num; i++) {
			printf("%d. %s\n", i + 1, c.skl[i].name);
		}
		printf("\n");
		ch = getch() - '0';

		if (ch > 0 && ch <= Skill_Num) {
			return ch - 1;
		}
	}
}
