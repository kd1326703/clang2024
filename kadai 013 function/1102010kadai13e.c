//1102010 kadai13e.c
#include <stdio.h>
int max(int* p, int num);
int min(int* p, int num);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };

	printf("Contents of array\n");
	printf("10 25 7 45 2 100 3 70 50\n");

	printf("max = %d\tmin = %d\n", max(a, 9), min(a, 9));

	return 0;
}

int max(int* p, int num)
{
	int max, i = 0;

	max = *p;

	while (i < num - 1) {
		p++;
		if (max < *p) {
			max = *p;
		}
		i++;
	}

	return max;
}

int min(int* p, int num)
{
	int min, i = 0;

	min = *p;
	p++;
	while (i < num - 1) {
		if (*p < min) {
			min = *p;
		}
		p++;
		i++;
	}

	return min;
}