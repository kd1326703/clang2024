//1102010 kadai147.c
#include <stdio.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};
int main(void)
{
	struct animal data[50] = { {30, "dog", "white"},{50, "tiger", "yellow"},{60, "horse", "brown"} };
	struct animal* p;
	int i, len = 3, j, k, l;
	char x;
	p = data;


	while (1) {
		printf("Processing menu(X to exit)\n1: Show data 2: Add data 3: Search data --- ");
		scanf("%d", &i);
		scanf("%c", &x);

		if (x == 'X') {
			break;
		}

		if (i == 1) {
			for (j = 0; j < len; j++) {
				printf("No. : %d\tName : %s\tColor : %s\n", p->no, p->name, p->color);
				p++;
			}
			p = data;
			printf("\n");
		}

		if (i == 2) {
			printf("Enter new data\n");
			p = p + len;

			printf("Number : ");
			scanf("%d", &p->no);
			printf("Name : ");
			scanf("%s", &p->name);
			printf("Color : ");
			scanf("%s", &p->color);

			printf("Added new data\n\n");

			len++;
			p = data;
		}

		if (i == 3) {
			printf("Search registed data\n");
			printf("Search list(1: No. 2: Name 3: Color) : ");
			scanf("%d", &k);
			if (k == 1) {
				printf("Find number : ");
				scanf("%d", &l);

				for (j = 0; l == p->no; j++) {
					printf("No. : %d\tName : %s\tColor : %s\n", p->no, p->name, p->color);
					p++;
				}
				printf("\n");

			}

			if (k == 2) {
				printf("Name : ");
				//scanf("%s", &);
			}

			if (k == 3) {
				printf("Color : ");
				//scanf("%s", &);
			}
			

		}
	}

	return 0;
}