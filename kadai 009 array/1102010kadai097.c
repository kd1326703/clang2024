//1102010 kadai097.c
#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int i, c[10];

	printf("array a = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	printf("array c = ");
	for (i = 9; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}