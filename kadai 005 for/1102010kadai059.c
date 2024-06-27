//1102010 kadai059.c
#include <stdio.h>
main()
{
	int i, j;
	//i : ¡æ, j : ¡é

	printf("   ");
	for (i = 1; i <= 9; i++) {
		printf("%3d", i);
	}
	printf("\n==============================\n");

	for (j = 1; j <= 9; j++) {
		printf("%d |", j);
		for (i = 1; i <= 9; i++) {
			printf("%3d", i * j);
		}
		printf("\n");
	}
	

	return 0;
}