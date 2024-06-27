#include <stdio.h>
main()
{
	int i, j, sum, a[][3] = { {10,20,30},{1,2,3} };

	for (i = 0; i < 2; i++) {
		for (j = 0, sum = 0; j < 3; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			sum += a[i][j];
		}
		printf("Total of %d line = %d\n\n", i, sum);
	}

	return 0;
}