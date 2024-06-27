#include <stdio.h>
main()
{
	int i, is = 0;

	while (1) {
		printf("Enter number : ");
		scanf("%d", &i);

		if (i == -999) {
			break;
		}
		is += i;
	}
	printf("Total = %d \n", is);

	return 0;
}