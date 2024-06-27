#include <stdio.h>
main()
{
	char let;
	printf("Enter letter : ");
	scanf("%c", &let);

	if (let >= 'A' && let <= 'Z' || let >= 'a' && let <= 'z') {
		printf("You entered alphabet \n");
	}

	else {
		if (let >= '0' && let <= '9') {
			printf("You entered Number letter \n");
		}
		else {
			printf("You entered others letter \n");
		}
	}

	//else if 


	return 0;
}