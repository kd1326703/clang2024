#include <stdio.h>
main()
{
	int mon;
	printf("Enter month : ");
	scanf("%d", &mon);

	while (mon < 1 || mon > 12) {
		printf("Error : Please enter number between 1 and 12 : ");
		scanf("%d", &mon);
	}

	if (mon == 2) {
		printf("Last day is 28 or 29(leap year) \n");
	}

	else {
		if (mon == 4 || mon == 6 || mon == 9 || mon == 11) {
			printf("Last day is 30 \n");
		}
		else {
			printf("Last day is 31 \n");
		}
	}

	return 0;
}