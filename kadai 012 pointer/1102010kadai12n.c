//1102010 kadai12n.c
#include <stdio.h>
main()
{
	char* p = "Nippon";
	char* start = p;
	char* end = p;

	while (*end != '\0') {
		end++;
	}
	*end--;

	printf("Rverse array : ");
	while (end >= start) {
		putchar(*end);
		end--;
	}printf("\n");

	return 0;
}