//1102010 kadai145.c
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

	strcpy(peach.name, "peach");
	peach.price = 300;
	peach.point = 5;
	peach.number = 3;
	peach.total = 0;

	peach.total = peach.number * peach.price;

	printf("Name : %s\n", peach.name);
	printf("Price : %d\t", peach.price);
	printf("Point : ");
	for (int i = 0; i < peach.point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\t", peach.number);
	printf("Total : %d\n\n", peach.total);


	struct fruit grape;

	strcpy(grape.name, "grape");
	grape.price = 200;
	grape.point = 4;
	grape.number = 10;
	grape.total = 0;

	grape.total = grape.number * grape.price;

	printf("Name : %s\n", grape.name);
	printf("Price : %d\t", grape.price);
	printf("Point : ");
	for (int i = 0; i < grape.point; i++) {
		printf("¡Ú");
	}printf("¡Ù\n");
	printf("Number : %d\t", grape.number);
	printf("Total : %d\n\n", grape.total);


	struct fruit wm;

	strcpy(wm.name, "watermelon");
	wm.price = 1500;
	wm.point = 5;
	wm.number = 8;
	wm.total = 0;

	wm.total = wm.number * wm.price;

	printf("Name : %s\n", wm.name);
	printf("Price : %d\t", wm.price);
	printf("Point : ");
	for (int i = 0; i < wm.point; i++) {
		printf("¡Ú");
	}printf("\n");
	printf("Number : %d\t", wm.number);
	printf("Total : %d\n\n", wm.total);

	printf("All total = %d\n", peach.total + grape.total + wm.total);

	return 0;
}