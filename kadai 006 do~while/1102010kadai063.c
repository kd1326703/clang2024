//1102010 kadai063.c
#include <stdio.h>
main()
{
	int i = 0;

	while (i < 20) {
		i++;
		printf("%3d", i);
		if (i % 11 == 10) {
			printf("\n");
		}
	}

	return 0;
}