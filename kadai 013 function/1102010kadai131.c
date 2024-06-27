//1102010 kadai131.c
#include <stdio.h>

main()
{
	int c;
	char dumy[256];

	printf("Enter letter(ctrl + z to exit) : ");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		printf("Enter letter(ctrl + z to exit) : ");
		c = getchar();

	}

		return 0;
}