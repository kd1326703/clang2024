//1102010 kadai12c.c
#include <stdio.h>
main()
{
	int a[5][5] = {
		{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}
	};
	int* pa = a;
	int i, j;

	printf("Array a\n");
	for (i = 0; i < (5 * 5); i++) {
		printf("%3d", *pa++);
		if (i % 5 == 4) {
		printf("\n");
		}
	}

	return 0;
}