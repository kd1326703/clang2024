#include <stdio.h>

main()
{
	float d1, d2, d3, a1;
	printf("Enter three numbers : ");
	scanf("%f, %f, %f", &d1, &d2, &d3);
	a1 = d1 + d2 + d3;

	printf("Total = %.2f, Average = %.2f \n", a1, a1 / 3);
}