#include<stdio.h>

main()
{
	int n1, n2, n3, s1;
	printf("Enter three numbers : ");
	scanf("%d, %d, %d", &n1, &n2, &n3);
	s1 = n1 + n2 + n3;

	printf("Total = %d, Average = %.2f \n", s1, s1 / 3.0);

	return 0;
}