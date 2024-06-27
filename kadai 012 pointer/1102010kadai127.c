//1102010 kadai127.c
#include <stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 }, * pdata, sum;
	int i;

	printf("Contents of array\nArray data[] = ");
	for (i = 0; i < 5; i++) {
		printf("%f ", data[i]);
	}
	printf("\n");

	pdata = data;
	for (i = 0, sum = 0; i < 5; i++) {
		sum += *pdata;
		pdata++;
	}

	printf("Sum = %.3f\n", sum);
	printf("Avrage = %.3f\n", sum / 5);


	return 0;
}