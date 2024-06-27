//1102010 kadai038.c
#include <stdio.h>
main()
{
	char let;
	printf("Enter one letter : ");
	scanf("%c", &let);

	if (let >= 'A' && let <= 'Z') {
		printf("Transfer is %c \n", let + 0x20);
	}
	else {
		if (let >= 'a' && let <= 'z') {
			printf("Transfer is %c \n", let - 0x20);
		}
		else {
			printf("No transfer : %c\n", let);
		}
	}

	return 0;
}