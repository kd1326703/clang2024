#include <stdio.h>
main()
{
	int num, sum = 0, cnt = 0;

	printf("Enter whole number : ");

	while (scanf("%d", &num) != EOF) {
		cnt++;
		sum += num;
		printf("Enter whole number : ");
	}

	printf("Total = %d, Avrage = %.2f\n", sum, (float)sum / cnt);


	return 0;
}