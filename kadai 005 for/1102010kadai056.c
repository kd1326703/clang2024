//1102010 kadai056.c
#include <stdio.h>
main()
{
	char i, j;

	printf("Enter small alphabet letter : ");
	scanf("%c", &i);

	for (j = 0; i + j <= 'z'; j++) {
		printf("%c ", i + j);
	}
	printf("\n");

	return 0;
}