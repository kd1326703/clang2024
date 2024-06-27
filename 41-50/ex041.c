#include <stdio.h>
main()
{
	float box[3], sum;
	int i;

	for (sum = 0, i = 0; i < 3; i++) {
		printf("Enter number : ");
		scanf("%f", &box[i]);

		sum += box[i];
	}

	printf("Total = %.2f \nAvrage = %.2f \n", sum, sum / 3); 

	return 0;
}