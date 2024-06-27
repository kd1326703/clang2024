#include <stdio.h>
void cmp(int x, int y, int z, int* max, int* min);
main()
{
	int a, b, c, d, e;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &a, &b, &c);

	cmp(a, b, c, &d, &e);
	printf("Max = %d, min = %d\n", d, e);

	return 0;
}

void cmp(int x, int y, int z, int* max, int* min)
{
	if (x > y) {
		*max = x;
		*min = y;
	}
	else {
		*min = x;
		*max = y;
	}
	if (z > *max) {
		*max = z;
	}
	if (z < *min) {
		*min = z;
	}
}