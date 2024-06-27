//1102010 kadai146.c
#include <stdio.h>
#include <string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit peach;
	struct fruit* p1;
	p1 = &peach;

	strcpy(p1 -> name, "peach");
	p1->price = 300;
	p1->point = 5;
	p1->number = 3;
	p1->total = 0;

	p1->total = p1->number * p1->price;

	printf("Name : %s\n", p1->name);
	printf("Price : %d\t", p1->price);
	printf("Point : ");
	for (int i = 0; i < p1->point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\t", p1->number);
	printf("Total : %d\n\n", p1->total);


	struct fruit grape;
	struct fruit* p2;
	p2 = &grape;

	strcpy(p2 -> name, "grape");
	p2->price = 200;
	p2->point = 4;
	p2->number = 10;
	p2->total = 0;

	p2->total = p2->number * p2->price;

	printf("Name : %s\n", p2->name);
	printf("Price : %d\t", p2->price);
	printf("Point : ");
	for (int i = 0; i < p2->point; i++) {
		printf("¡Ú");
	}printf("¡Ù\n");
	printf("Number : %d\t", p2->number);
	printf("Total : %d\n\n", p2->total);


	struct fruit wm;
	struct fruit* p3;
	p3 = &wm;

	strcpy(p3 -> name, "watermelon");
	p3 ->price = 1500;
	p3 ->point = 5;
	p3 ->number = 8;
	p3 ->total = 0;

	p3->total = p3->number * p3->price;

	printf("Name : %s\n", p3->name);
	printf("Price : %d\t", p3->price);
	printf("Point : ");
	for (int i = 0; i < p3->point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\t", p3->number);
	printf("Total : %d\n\n", p3->total);

	printf("All total = %d\n", p1 -> total + p2 -> total + p3 -> total);

	return 0;
}