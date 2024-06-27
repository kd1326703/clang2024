//1102010 kadai066.c
#include <stdio.h>
main()
{
	int i = 0, sum = 0;

	do {
		i++;
		printf("%d", i);
		sum += i;
		if (sum <= 300) {
			printf("+");
		}

	} while (sum <= 300);
	printf("=%d\n", sum);

	return 0;
}