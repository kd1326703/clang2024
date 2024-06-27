//1102010 kadai044.c
#include <stdio.h>
main()
{
	int ia;
	printf("Enter whole number(-999 to stop) : ");
	scanf("%d", &ia);

	while (ia != -999) {
		printf("Octal no. = %o	Hexademical no. = %x \n",ia ,ia );
		printf("Enter whole number(-999 to stop) : ");
		scanf("%d", &ia);
	}

	printf("End \n");
	return 0;
}