//1102010 kadai135.c
#include <stdio.h>
main()
{
	char let[256], rev[265];
	char* plet, * prev;
	int len;

	printf("Enter a word(ctrl + z to exit) : ");

	while (scanf("%s",let) != EOF) {
		plet = let;
		len = 0;
		while (*plet != '\0') {
			plet++;
			len++;
		}
		plet--;

		prev = rev;
		while (len > 0) {
			*prev++ = *plet--;
			len-- ;
		}
		*prev = '\0';

		printf("%s\n", rev);

		printf("Enter a word(ctrl + z to exit) : ");
	}

	return 0;
}