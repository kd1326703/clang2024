//1102010 kadai133.c
#include <stdio.h>
main()
{
	int max = 0, min = 0;
	int i, a;

	printf("Enter whole number(ctrl + z to exit) : ");
	a = scanf("%d", &i);
	while (a != EOF) {
		if (max < i) {
			max = i;
		}
		if (min > i) {
			min = i;
		}
		printf("Enter whole number(ctrl + z to exit) : ");
		a = scanf("%d", &i);
	}

	printf("max = %d\nmin = %d\n", max, min);


	return 0;
}