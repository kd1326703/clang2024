#include <stdio.h>

main()
{
	int i;

	printf("break test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%d ", i);
	}

	printf("\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;
		}
		printf("%d ", i);
	}

	return 0;
}