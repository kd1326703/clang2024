//1102010 kadai12a.c
#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 }, * pa = a;
	int b[] = { 4,8,12,16,20,24,28,32,38,42 }, * pb = b;
	int i;

	printf("---Before---\n");

	printf("a[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(pa + i));
	}
	printf("\n");

	printf("b[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(pb + i));
	}
	printf("\n");

	printf("---After---\n");

	//Reverse Array a and put into Array b using pointer
	pa = a + 9;
	pb = b;
	for (i = 0; i < 10; i++) {
		*(pb + i) = *(pa - i);
		
	}

	//Reset pa and pb
	pa = a;
	pb = b;

	printf("a[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(pa + i));
	}
	printf("\n");

	printf("b[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *(pb + i));
	}
	printf("\n");


	return 0;
}