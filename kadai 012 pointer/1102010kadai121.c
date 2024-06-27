//1102010 kadai121.c
#include <stdio.h>
main()
{
	int i = 100, j = 10;
	int* pi, * pj;

	pi = &i, pj = &j;

	printf("%d + %d = %d\n", *pi, *pj, *pi + *pj);
	printf("%d - %d = %d\n", *pi, *pj, *pi - *pj);
	printf("%d * %d = %d\n", *pi, *pj, *pi * *pj);
	printf("%d / %d = %d\n", *pi, *pj, *pi / *pj);

	return 0;
}