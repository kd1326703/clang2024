//1102010 kadai093.c
#include <stdio.h>
main()
{
	int i, a[10], b[10], c[10];

	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
	}

	for (i = 0; i < 10; i++) {
		b[i] = (i + 1) * 100;
	}

	for (i = 0; i < 10; i++) {
		c[i] = a[i] + b[i];
	}

	printf("Sum Array a and Array b to Array c \nArray a = ");

	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf("\nArray b = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
	printf("\nArray c = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}

	return 0;
}