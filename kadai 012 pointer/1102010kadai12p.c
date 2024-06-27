//1102010 kadai12p.c
#include <stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday", NULL };
	char** pday;
	int i;

	pday = day;
	while (*pday != NULL) {
		printf("%s\n", *pday++);
	}

	return 0;
}