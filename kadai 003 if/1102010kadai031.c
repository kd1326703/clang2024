//1102010 kadai031.c
#include <stdio.h>
main()
{
	float ia, ib;
	printf("two numbers : ");
	scanf("%f %f", &ia, &ib);

	if (ia > ib) {
		printf("bigger one = %f \n", ia);
	}
	else {
		printf("bigger one = %f \n", ib);
	}

	return 0;
}