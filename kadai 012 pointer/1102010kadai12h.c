//1102010 kadai12h.c
#include <stdio.h>
main()
{
	char str[20] = { "kadai12h.c" };
	char* pstr = str;
	int i;

	printf("Contents of array = ");
	while (*pstr != '\0') {
		putchar(*pstr++);
	}
	printf("\n");
	return 0;
}