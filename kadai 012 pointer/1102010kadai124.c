//1102010 kadai124.c
#include <stdio.h>
main()
{
	char c;
	char* pc = &c;

	printf("Enter one letter : ");
	scanf("%c", &*pc);

	printf("You entered %c\n", *pc);
	printf("Next letter is %c\n", *pc+1);

	return 0;
}