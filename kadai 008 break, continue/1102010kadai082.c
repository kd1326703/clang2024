//1102010 kadai082.c
#include <stdio.h>
main()
{
	int i = 0, cnt = 0, sum = 0;

    while (i != -999) {
        printf("Whole number (-999 to exit) : ");
        scanf("%d", &i);
        if (i < 0) {
            continue;
        }
        cnt++;
        sum += i;
    }

	printf("Sum = %d\nAvrage = %.3f\n", sum, (float)sum / cnt);

	return 0;
}