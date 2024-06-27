//1102010 kadai136.c
#include <stdio.h>
int comp(int a, int b);
main()
{
	int i, j, ans;
	
	printf("Enter two whole number : ");
	scanf("%d %d", &i, &j);
	ans = comp(i, j);
	printf("max = %d\n", ans);

	return 0;
}

int comp(int a, int b)
{
	return (a > b) ? a : b;
}