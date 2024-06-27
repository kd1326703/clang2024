//1102010 kadai12g.c
#include <stdio.h>
main()
{
	int a[5][5] = {
		{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}
	}, * pa;
	int c[5][5], * pc;
	int i;
	
	/*for (i = 0; i < (5 * 5); i++) {
		*pa++;
	}*/

	pa = &a[0][0];
	pc = &c[0][0];
	
	for (i = 0; i < (5 * 5); i++) {
		*(pc + i) = *(pa + (5 * 5 - 1) - i);
	}


	printf("Array c\n");
	for (i = 0; i < (5 * 5); i++) {
		printf("%3d", *(pc + i));
		if (i % 5 == 4) {
			printf("\n");
		}
	}



	return 0;
}