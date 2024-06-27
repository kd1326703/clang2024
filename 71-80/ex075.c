#include <stdio.h>
void ffao(int x, int y, int* add, int* sub, int* mul, int* div);
main()
{
	int a, b, c, d, e, f;
	printf("Number x? : ");
	scanf("%d", &a);
	printf("Number y? : ");
	scanf("%d", &b);

	ffao(a, b, &c, &d, &e, &f);
	puts("ffao of x and y");

	printf("add = %d, sub = %d, mul = %d, div = %d\n", c, d, e, f);

}

void ffao(int x, int y, int* add, int* sub, int* mul, int* div)
{
	*add = x + y;
	*sub = x - y;
	*mul = x * y;
	*div = x / y;

	return 0;
}