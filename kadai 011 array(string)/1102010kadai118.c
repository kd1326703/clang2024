//1102010 kadai118.c
#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, j;

	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			putchar(day[i][j]);
		}
			printf("\n");
	}

	return 0;
}