//1102010 kadai12l.c
#include <stdio.h>
main()
{
	char a[30], * pa = a;
	int cnt;

	printf("String? : ");
	gets(&a);

	for (cnt = 0; *pa != '\0'; cnt++) {
		putchar(*pa++);
	}printf("\n");

	printf("The number of letters is %d\n", cnt);

	return 0;
}