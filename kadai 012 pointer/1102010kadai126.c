//1102010 kadai126.c
#include <stdio.h>
main()
{
	int i, max, min, data[10] = { 10,9,1,20,45,21,38,45,88,5 };
	int* pdata = data;

	printf("Contents of array\ndata[] = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", *pdata++);
	}
	printf("\n");

	max = *data;
	min = *data;
	
	for (i = 0; i < 10; i++) {
		if (max < *pdata) {
			max = *pdata;
		}
	}
	printf("Maximun = %d\n", max);

	
	for (i = 0; i < 10; i++) {
		if (min > *pdata) {
			min = *pdata;
		}
	}
	printf("Minimun = %d\n", min);


	return 0;
}