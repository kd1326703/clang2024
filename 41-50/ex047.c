#include <stdio.h>
main()
{
	int i, j;
	float ia, sum;
	float x[3][2];

	for (i = 0; i < 3; i++) {
		for (j = 0, sum = 0; j < 2; j++) {
			printf("x[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			sum += x[i][j];
		}
		printf("Avrage of %d line = %.2f\n\n", i, sum / 2);
	}

	return 0;
}