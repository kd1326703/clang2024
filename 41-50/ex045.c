#include <stdio.h>
main()
{
	int i, sum;
	int a[][3] = { {10,20,30}, { 1,2,3 } };
	for (i = 0, sum = 0; i < 3; i++) {
		printf("a[0][%d] = %d\n", i, a[0][i]);
		sum += a[0][i];
	}
	printf("Total of first line = %d\n\n", sum);

	for (i = 0, sum = 0; i < 3; i++) {
		printf("a[1][%d] = %d\n", i, a[1][i]);
		sum += a[1][i];
	}
	printf("Total of second line = %d\n", sum);

	return 0;
}