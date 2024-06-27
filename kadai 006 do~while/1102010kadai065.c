//1102010 kadai065.c
#include <stdio.h>
main()
{
	int i, cnt = 0 , sum = 0;

	do {
		printf("Enter whole number(-999 to exit) : ");
		scanf("%d", &i);
		if (i != -999) {
			cnt++;
			sum += i;
		}

	} while (i != -999);

	printf("Sum = %d\n", sum);
	printf("Avrage = %f\n", (float)sum / cnt);

	return 0;
}