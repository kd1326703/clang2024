//1102010 kadai096.c
#include <stdio.h>
main()
{
    int i, cnt = 0, num;
    int c[10];

    while (1) {
        printf("Whole number(-999 to exit) : ");
        scanf("%d", &num);
        if (num == -999) {
            break;
        }
        if (cnt < 10) {
            c[cnt] = num;
            cnt++;
        }
        else {
            printf("Array is full.\n");
            break;
        }
    }

	printf("Array c = ");
	for (i = 0; i < cnt; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");

	return 0;
}