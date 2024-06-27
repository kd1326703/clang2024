//1102010 kadai084.c
#include <stdio.h>
main()
{
	int i, j;

	while (1) {
		printf("Whole number1(-999 to exit) : ");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}

		printf("Whole number2(-999 to exit) : ");
		scanf("%d", &j);
		if (j == 0) {
			continue;
		}
		if (j == -999) {
			break;
		}

		printf("%d / %d = %d rest %d\n", i, j, i / j, i % j);

	}

	return 0;
}