//1102010 kadai052.c
#include <stdio.h>
main()
{
	int i;

	for (i = 1; i <= 60; i++) {
		printf("%2d ", i);
		if (i % 20 == 0) {
			printf("\n");
		}
	}

	return 0;
}