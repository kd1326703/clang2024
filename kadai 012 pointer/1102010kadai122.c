//1102010 kadai122.c
#include <stdio.h>
main()
{
	int a = 5, b = 30, wrk;
	int* pa = &a, * pb = &b, * pwrk = &wrk;

	puts("Before");
	printf("a = %d, b = %d\n", *pa, *pb);

	pwrk = pa;
	pa = pb;
	pb = pwrk;

	puts("After");
	printf("a = %d, b = %d\n", *pa, *pb);

	return 0;
}