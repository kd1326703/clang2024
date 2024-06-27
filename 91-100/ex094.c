//ex094
#include <stdio.h>
#define peo 5
/*struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[peo];
	struct profile* p;
	int i;

	for (p = data, i = 0; i < peo; i++, p++) {
		printf("Person%d (name) : ", i + 1);
		scanf("%s", &p->name);
		printf("Person%d (birthday) : ", i + 10);
		scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("Person%d (blood type) : ", i + 10);
		scanf("%s", &p->blood);
	}

	for (p = data, i = 0; i < peo; i++, p++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
				p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

	return 0;
}*/

//ex094-1
struct day
{
	int year;
	int month;
	int day;
};
struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};

int main(void)
{
	struct profile data[peo] = {
		{"A",1001, 02, 2, "AB"},
		{"B",2001, 12, 28, "B"},
		{"C",1999, 12, 10, "B"},
		{"D",4001, 2, 14, "AB"},
		{"E",5001, 02, 22, "O"},
	};
	int i, j, k;
	char l[5];
	struct profile* p;

	printf("Enter number(1:year 2:month 3:blood type) : ");
	scanf("%d", &j);
	if (j == 1) {
		printf("Enter year : ");
		scanf("%d", &k);
	}

	if (j == 2) {
		printf("Enter month : ");
		scanf("%d", &k);
	} 
	if (j == 3) {
		printf("Enter blood type : ");
		scanf("%s", l);
	} 

	for (p = data, i = 0; i < peo; i++, p++) {
	if (p->date.year == k) {
		printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
			p->name, p->date.year, p->date.month, p->date.day, p->blood);
	}
	if (p->date.month == k) {
		printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
			p->name, p->date.year, p->date.month, p->date.day, p->blood);
	}
	if (strcmp(p->blood, l) == 0) {
		printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
			p->name, p->date.year, p->date.month, p->date.day, p->blood);
	}
	
	}

}