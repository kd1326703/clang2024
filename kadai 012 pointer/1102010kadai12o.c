//1102010 kadai12o.c
#include <stdio.h>
main()
{
	char* p = { "pointer test program" };
	char save[256];
	char* psave = save;

	while (*p != '\0') {
		*psave++ = *p++;
	}
	*psave = '\0';
	psave = save;

	printf("Array save[] = ");
	while (*psave != '\0') {
		putchar(*psave++);
	}printf("\n");

	return 0;
}