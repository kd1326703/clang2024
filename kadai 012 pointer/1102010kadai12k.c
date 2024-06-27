//1102010 kadai12k.c
#include <stdio.h>
main()
{
	char a[30] = "mikan to ringo", * pa = a;
	char b[30], * pb = b;
	int i;

	printf("contents except for blanks = ");

	for (i = 0; *pa != '\0'; pa++) {
		if (*pa == ' ') {
			continue;
		}
		*pb++ = *pa;
	}
	*pb = '\0';
	pb = b;

	while (*pb != '\0') {
		putchar(*pb++);
	}printf("\n");



	return 0;
}