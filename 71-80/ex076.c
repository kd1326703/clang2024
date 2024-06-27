#include <stdio.h>
void cal(int x, int y, int* add);
main()
{
	int a, b, c;
	printf("Enter two whole numbers : ");
	scanf("%d %d", &a, &b);

	cal(a, b, &c);
	printf("Sum = %d, Avr = %.2f\n", c, (float)c / 2);
}

void cal(int x, int y, int* add)
{
	*add = x + y;

	return 0;
}