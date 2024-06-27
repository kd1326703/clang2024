//1102010 kadai13c.c
#include <stdio.h>
void rev(int *x, int *y);
main()
{
	int a = 10, b = 20, c;
	printf("Before\n");
	printf("a = %d, b = %d\n", a, b);

	rev(&a, &b);
	printf("After\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void rev(int *x, int *y)
{
	int w;
	w = *x;
	*x = *y;
	*y = w;
}