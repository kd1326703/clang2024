//1102010 kadai134.c
#include <stdio.h>
main()
{
	char let[256];

	printf("Enter letter(ctrl + z to exit) : ");
	int a = scanf("%s", let);

	while (a != EOF) {
		printf("%s\n",let);
		printf("Enter letter(ctrl + z to exit) : ");
		a = scanf("%s", let);
	}

	return 0;
}