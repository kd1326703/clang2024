//1102010 kadai129.c
#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 }, * pa = a;
	int b[] = { 4,8,12,16,20,24,28,32,38,42 }, * pb = b;
	int i, w[10], * pw = w;

	printf("---Before---\n");
	
	printf("Array a[] = ");
	for (i = 0; i < 10; i++, pa++) {
		printf("%d ", *pa);
	}
	printf("\n");

	printf("Array b[] = ");
	for (i = 0; i < 10; i++, pb++) {
		printf("%d ", *pb);
	}
	printf("\n");


	printf("---After---\n");

	pa = a;
	pb = b;
	pw = w;

	for (i = 0; i < 10; i++) {
		*pw = *pa;
		*pa = *pb;
		*pb = *pw;
		pa++;
		pb++;
		pw++; 
	}

	pa = a;
	pb = b;

	printf("Array a[] = ");
	for (i = 0; i < 10; i++, pa++) {
		printf("%d ", *pa);
	}
	printf("\n");

	printf("Array b[] = ");
	for (i = 0; i < 10; i++, pb++) {
		printf("%d ", *pb);
	}
	printf("\n");

	return 0;
}