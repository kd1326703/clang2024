//1102010 kadai058.c
#include <stdio.h>
main()
{
	int i, j;
	for (i = 32, j = 0; i <= 126; i++, j++) {
		printf("%X  %c ", i,(char)i);
		if (j % 10 == 9) {
			printf("\n");
		}
	}

	return 0;
}