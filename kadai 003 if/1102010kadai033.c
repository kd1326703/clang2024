//1102010 kadai033.c
#include <stdio.h>
main()
{
	char let;
	printf("Enter letter : ");
	scanf("%c", &let);

	if (let >= 41 && let <= 0x5A) {
		printf("You entered Capital letter \n");
	}
	else{
		if (let >= 61 && let <= 0x7A) {
			printf("You entered small letter \n");
		}
	}

	return 0;
}