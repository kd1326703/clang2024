#include <stdio.h>

enum BitState { 
	Base = 0, 
	Poison = 1 << 0, 
	Sleep =  1 << 1, 
	Paralysis =  1 << 2, 
	Burn =  1 << 3, 
	AtkUp = 1 << 4, 
	AtkDown = 1 << 5 
};

typedef unsigned int UNIT;

void DisplayStatus(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT* s);

main()
{
	UNIT MyState = Base;
	ChangeFlag(&MyState);
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);

	return 0;
}

void DisplayStatus(UNIT s)
{
	printf("\n***Current Status***\n");

	if (s & Poison) {
		printf("Poison\n");
	}
	if (s & Sleep) {
		printf("Sleep\n");
	}
	if (s & Paralysis) {
		printf("Paralysis\n");
	}
	if (s & Burn) {
		printf("Burn\n");
	}
	if (s & AtkUp) {
		printf("AtkUp\n");
	}
	if (s & AtkDown) {
		printf("AtkDown\n");
	}
	if (s == Base) {
		printf("No any state\n");
	}

	printf("********************\n\n");
}

void ChangeFlag(UNIT* s)
{
	int a;

	while (1) {
		DisplayStatus(*s);

		printf("Which state do you want?\n");
		printf("1: Poison, 2: Sleep, 3: Paralysis, 4: Burn, 5: Atk up, 6: Atk down, 0:Exit : ");
		scanf("%d", &a);

		if (a == 0) {
			break;
		}

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
		DisplayStatus(*s);

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
