#include <stdio.h>
main()
{
	int total = 0, n1;
	printf("Enter number : ");
	scanf("%d", &n1);

	while (n1 != -999) {
		total += n1;
		printf("Enter number : ");
		scanf("%d", &n1);
	}
	printf("Total = %d \n", total);

	return 0;
}