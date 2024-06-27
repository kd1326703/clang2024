//1102010 kadai098.c
#include <stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i;
    int max = data[0];
    int min = data[0];

	printf("array data = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

    for (i = 1; i < 10; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    for (i = 1; i < 10; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }

    printf("Max number: %d\n", max);
    printf("min number: %d\n", min);


	return 0;
}