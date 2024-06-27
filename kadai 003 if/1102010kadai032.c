//1102010 kadai032.c
#include <stdio.h>
main()
{
	int no;
	printf("number? : ");
	scanf("%d", &no);

	if (no % 2 == 0) {
		printf("You enetered even number");
	}

	else {
		printf("You enetered odd number");
	}

	return 0;
}