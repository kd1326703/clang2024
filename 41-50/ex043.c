#include <stdio.h>
main()
{
	char str[] = "orange";
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	printf("String : %s \n", &str[0]);
	printf("Count : %d \n", i);

	return 0;
}