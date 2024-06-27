//1102010 kadai092.c
#include <stdio.h>
main()
{
	int i, a[10], c[10];

	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
	}

	for (i = 0; i < 10; i++) {
		c[i] = a[i];
	}

	printf("Copy Array a to Array c \nArray a = ");

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\nArray c = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}

	return 0;
}