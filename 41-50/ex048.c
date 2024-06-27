#include <stdio.h>
main()
{
	int apt[2][2][3] = { { {3,4,5},{4,5,6} }, { {2,2,3},{2,5,6} } };
	int i, j, k, sum;

	for (sum = 0, i = 0; i < 2; i++) {
		printf("Apt%d", i + 1);
		for (j = 0; j < 2; j++) {
			printf(" (%dfloor) : ", j + 1);
			for (k = 0; k < 3; k++) {
				printf("%d ", apt[i][j][k]);
				sum += apt[i][j][k];
			}
			
		}
		printf("\n");
	}
	printf("All of people is %d \n", sum);

	return 0;
}