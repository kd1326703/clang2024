//1102010 kadai138.c
#include <stdio.h>
void star(int x);
main()
{
	int i;
	char c;

	printf("Enter whole number : ");
	scanf("%d", &i);
	star(i);

	return 0;
}

void star(int x)
{
	int a = 0;

	while (a < x) {
		printf("*");
		a++;
	}

}