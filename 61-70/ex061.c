#include <stdio.h>
main()
{
	char data[10] = "Orange";
	char* pdata;
	char* p = "Apple";

	pdata = data;
	printf("data[] = ");
	
	while (*pdata) {
		putchar(*pdata++);
	}

	printf("\n*p = ");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');

	return 0;
}