//1102010 kadai103.c
#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];
	int i, j;


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			c[i][j] = a[i][j] + b[i][j];
			printf("%4d", c[i][j]);
			if (j % 5 == 4) {
				printf("\n");
			}
		}
	}
	
	/*for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", a[i][j] + b[i][j]);
			if (j % 5 == 4) {
				printf("\n");
			}
		}
	}*/


	return 0;
}