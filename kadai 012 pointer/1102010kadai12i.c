//1102010 kadai12i.c
#include <stdio.h>
main()
{
	char a[10] = "mikan", * pa = a;
	char b[10], * pb = b;
	int i;

	while (*pa != '\0') {
		*pb = *pa;
		pa++;
		pb++;
	}
	*pb = '\0';
	pb = b;

	printf("Copied string = ");
	while (*pb != '\0') {
		putchar(*pb++);
	}
	printf("\n");

		 
	return 0;
}