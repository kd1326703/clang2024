//1102010 kadai02a.c
#include <stdio.h>
main()
{
	double ia, ib;
	printf("two numbers : ");
	scanf("%lf %lf", &ia, &ib);

	printf("%.1f and %.1f \n", ia, ib);

	printf("(+) = %f ", ia + ib);
	printf("(-) = %f ", ia - ib);
	printf("(*) = %f ", ia * ib);
	printf("(/) = %f ", ia / ib);
	

	return 0;
}