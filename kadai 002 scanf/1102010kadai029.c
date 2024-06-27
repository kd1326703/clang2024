//1102010 kadai029.c
#include <stdio.h>
main()
{
	double rad, pi, dn1, cf, suf;
	printf("radius? : ");
	scanf("%lf", &rad);

	pi = 3.1415, dn1 = rad * 2, cf = dn1 * pi, suf = rad * rad * pi;
	printf("dn1meter = %f \n", dn1);
	printf("circumference = %f \n", cf);
	printf("Surface = %f \n", suf);

	return 0;
}