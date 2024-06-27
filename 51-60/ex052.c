#include <stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a, * p_b;
	
	printf("Before : a = %d, b = %d\n", a, b);
	p_a = &b;
	p_b = &a;
	printf("After : a = %d, b = %d\n", *p_a, *p_b);

	return 0;
}