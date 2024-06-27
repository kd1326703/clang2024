//1102010 kadai043.c
#include <stdio.h>
main()
{
	int ia;
	printf("Enter number(-1 to stop) : ");
	scanf("%x", &ia);

	while (ia != -1) {
		printf("%x\n", ia);
		printf("Enter number(-1 to stop) : ");
		scanf("%x", &ia);
	}

	printf("End \n");
	return 0;
}