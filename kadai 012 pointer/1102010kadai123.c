//1102010 kadai123.c
#include <stdio.h>
main()
{
	double a, b;
	double* pa = &a, * pb = &b;

	printf("Num1 : ");
	scanf("%lf", &*pa);
	printf("Num2 : ");
	scanf("%lf", &*pb);

	printf("Bigger one is ");
	if (*pa > *pb) {
		printf("%f\n", *pa);
	}
	else {
		printf("%f\n", *pb);
	}

	return 0;
}