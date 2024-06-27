//1102010 kadai035.c
#include <stdio.h>
main()
{
	int no;
	printf("Enter number : ");
	scanf("%d", &no);
	if (no > 0) {
		printf("You entered positive number \n");
	}
	else {
		if (no < 0) {
			printf("You entered negative number \n");
		}
		else {
			printf("You entered 0 \n");
		}
	}

	return 0;
}