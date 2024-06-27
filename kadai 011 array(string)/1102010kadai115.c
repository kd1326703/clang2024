//1102010 kadai115.c
#include <stdio.h>
main()
{
	int i;
	char str[] = "";

	printf("String? = ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		printf("%c\n", str[i]);
	}

	return 0;
}