//1102010 kadai12d.c
#include <stdio.h>
main()
{
	int b[5][5] = {
		{3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75}
	}, * pb = b;
	int c[5][5], * pc = c;
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			pc = pb;
		}
	}

	printf("Array c\n");
	for (i = 0; i < (5 * 5); i++) {
		printf("%3d", *pc++);
		if (i % 5 == 4) {
			printf("\n");
		}
	}





	return 0;
}