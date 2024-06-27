#include <stdio.h>

main()
{
	char let;
	printf("Enter one small letter : ");
	scanf("%c", &let);

	printf("small to Capital is %c \n", let - 32);

	return 0;
}