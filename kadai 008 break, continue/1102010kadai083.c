//1102010 kadai083.c
#include <stdio.h>
main()
{
	int i;

	for (i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}