//1102010 kadai13a.c
#include <stdio.h>
int pow(int x, int y);
main()
{
	int i, j;

	printf("First whole number : ");
	scanf("%d", &i);
	printf("Second whole number : ");
	scanf("%d", &j);

	printf("The %d power of %d is %d\n", j, i, pow(i, j));

	return 0;
}

int pow(int x, int y)
{
	int a = 1;
	
	for (int b = 0; b < y; b++) {
		a *= x;
	}

	return a;
}