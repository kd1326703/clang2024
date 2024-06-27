//1102010 kadai144.c
#include <stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit goods;
	struct fruit* p;
	p = &goods;

	strcpy(p -> name, "peach");
	p -> price = 300;
	p -> point = 5;
	p -> number = 3;
	p -> total = 0;

	p->total = p->number * p->price;

	printf("Name : %s\n", p->name);
	printf("Price : %d\n", p->price);
	printf("Point : ");
	for (int i = 0; i < p->point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\n", p->number);
	printf("Total : %d\n", p->total);


	return 0;
}