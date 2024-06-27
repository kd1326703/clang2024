#include <stdio.h>
main()
{
	char let;
	printf("Enter letter : ");
	scanf("%c", &let);

	if (let >= 'A' && let <= 'Z') {
		printf("You entered Capital letter \n");
	}

	else {
		printf("You entered others letter \n");
	}

	return 0;
}