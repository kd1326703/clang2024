//1102010 kadai102.c
#include <stdio.h>
main()
{
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];
	int i, j;

	printf("Content of Array c \n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", b[i][j]);
			if (j % 6 == 4) {
				printf("\n");
			}
		}
	}

	return 0;
}