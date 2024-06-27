//1102010 kadai041.c
#include <stdio.h>
main()
{
	int i, ia = 0;
	float sum = 0, avr = 0;
	printf("Enter number : ");
	scanf("%d", &i);

	while (i != -999) {
		ia++;
		sum += i;
		avr = sum / ia;
		printf("Enter number : ");
		scanf("%d", &i);
	}
	printf("Total = %.0f \nAvrage = %.2f \n", sum, avr);

	return 0;
}