//1102010 kadai053.c 
#include <stdio.h>
main()
{
	int i, j;

	printf("Enter whole number :");
	scanf("%d", &i);

	for (j = 0; j <= 10; j++) {
		printf("%d ", i + j);
	}

	return 0;
}