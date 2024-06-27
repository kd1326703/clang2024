//1102010 kadai13f.c
#include <stdio.h>
#define S 9
int up(int* p);
int down(int* p);
main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int i;

	printf("How to sort(0: ascending, 1: decending) : ");
	scanf("%d", &i);

	printf("Before sorting\n");
	printf("10 25 7 45 2 100 3 70 50\n");

	if (i == 0) {
		up(a);
	}
	if (i == 1) {
		down(a);
	}

	printf("After sorting\n");
	for (int j = 0; j < S; j++) {
		printf("%d ", a[j]);
	}
	printf("\n");


	return 0;
}

int up(int* p)
{
	int i, j, w;

	for (i = 8; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (*(p + j) > *(p + j + 1)) {
				w = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = w;
			}
		}
	}
}

int down(int* p)
{
	int i, j, w;

	for (i = 0; i < S - 1; i++) {
		for (j = 0; j < S - 1 - i; j++) {
			if (*(p + j) < *(p + j + 1)) {
				w = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = w;
			}
		}
	}
}
