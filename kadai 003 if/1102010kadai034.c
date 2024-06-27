//1102010 kadai034.c
#include <stdio.h>
main()
{
	char let;
	printf("Enter letter : ");
	scanf("%c", &let);

	if (let >= 'A' && let <= 'Z') {
		printf("You entered capital letter \n");
	}
	else {
		if (let >= 'a' && let <= 'z') {
			printf("You entered small letter \n");
		}
		else {
			printf("Error \n");
		}
	}

	return 0;
}