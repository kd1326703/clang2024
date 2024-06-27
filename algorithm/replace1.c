#include <stdio.h>
main()
{
	int a = 5, b = 3, c = 0;
	printf("a = %d, b = %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a = %d, b = %d \n", a, b);

	return 0;
}