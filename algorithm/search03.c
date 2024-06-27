#include <stdio.h>
main()
{
	int d[11] = { 10, 15, 18, 26, 28, 35, 47, 55, 68, 78, 96 };
	int low, mid, high, s;

	printf("Enter number : ");
	scanf("%d", &s);

	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("Not found \n");
	}
	else {
		printf("Found %d at d[%d] \n", s, mid);
	}

	return 0;
}