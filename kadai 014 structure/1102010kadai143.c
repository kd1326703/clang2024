//1102010 kadai143.c
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
	struct fruit goods;

	strcpy(goods.name, "peach");
	goods.price = 300;
	goods.point = 5;
	goods.number = 3;
	goods.total = 0;

	goods.total = goods.number * goods.price;

	printf("Name : %s\n", goods.name);
	printf("Price : %d\n", goods.price);
	printf("Point : ");
	for (int i = 0; i < goods.point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\n", goods.number);
	printf("Total : %d\n", goods.total);

	return 0;
}