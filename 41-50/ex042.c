#include <stdio.h>
main()
{
	int i = 0;
	char data[] = "Apple";

	printf("Show each letter \n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}

	printf("\nShow string \n");
	printf("%s \n", &data[0]);

	return 0;
}