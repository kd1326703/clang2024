//1102010 kadai064.c
#include <stdio.h>
main()
{
	int i = 20;

	while (i >= 1) {
		printf("%3d", i);	
		i--;
		if (i % 11 == 10) {
			printf("\n");
		}
	}

	return 0;
}