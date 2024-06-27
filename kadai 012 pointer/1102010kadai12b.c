//1102010 kadai12b.c
#include <stdio.h>
main()
{
	int a[30] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 0 }, * pa = a;
	int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42, 0 }, * pb = b;
	int i, j;

	printf("---Before---\n");

	printf("a[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(pa + i));
	}
	printf("\n");

	printf("---After---\n");

	for (j = 0; j < 10; i++, j++) {
		*(pa + i) = *(pb + j);
	}

	printf("a[] = ");
	for (i = 0; *(pa + i) != 0; i++) {
		printf("%d ", *(pa + i));
	}
	printf("\n");
	
	return 0;
}