//1102010 kadai12j.c
#include <stdio.h>
main()
{
	char a[10] = "ringo", * pa = a;
	char b[10], * pb = b;
	int length = strlen(a);
	int i;

	printf("Contents = ");
	while (*pa != '\0') {
		putchar(*pa++);
	}printf("\n");
	

	pa = a + length - 1;
	for (i = 0; i < length; i++) {
		*pb++ = *pa--;
	}
	*pb = '\0';
	pb = b;

	printf("Reverse = ");
	while (*pb != '\0') {
		putchar(*pb++);
	}printf("\n");


	return 0;
}