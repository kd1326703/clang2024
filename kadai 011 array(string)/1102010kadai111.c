//1102010 kadai111.c
#include <stdio.h>
main()
{
	int i = 0;
	char str[] = "abcde";

	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}

	return 0;
}