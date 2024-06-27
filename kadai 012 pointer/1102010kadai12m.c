//1102010 kadai12m.c
#include <stdio.h>
main()
{
	char str1[128], * pstr1 = str1;
	char str2[128], * pstr2 = str2;
	int i, j;

	printf("String1? : ");
	gets(&str1);
	printf("String2? : ");
	gets(&str2);

	while (*pstr1 != '\0') {
		*pstr1++;
	}
	while (*pstr2 != '\0') {
		*pstr1++ = *pstr2++;
	}
	*pstr1 = '\0';
	pstr1 = str1;

	printf("str1 : ");
	while (*pstr1 != '\0') {
		putchar(*pstr1++);
	}printf("\n");

	return 0;
}