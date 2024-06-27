//1102010 kadai062.c
#include <stdio.h>
main()
{
	int i = 20;

	do {
		printf("%3d", i);
		i--;
		if (i % 11 == 10) {
			printf("\n");
		}
	} while (i >= 1);

	return 0;
}