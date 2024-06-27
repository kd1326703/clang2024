//1102010 kadai119.c
#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;

	for (i = 0; i < 7; i++) {
		if (day[i][0] == 's') {
			puts(day[i]);
		}
	}

	return 0;
}