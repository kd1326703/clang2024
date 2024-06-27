//1102010 kadai042.c
#include <stdio.h>
main()
{
	int ia = 0, is = 0;

	while (is <= 300) {
		ia++;
		printf("%d", ia);
		is += ia;
		if (is <= 300) {
			printf("+");
		}
	}
	printf("=%d \n", is);


	return 0;
}