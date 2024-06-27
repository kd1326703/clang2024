#include <stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;

	printf("Before\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]: %d ", i, d[i]);
	}
	printf("\n");

	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	printf("After\n");
	for (i = 0; i < N; i++) {
		printf("d[%d]: %d ", i, d[i]);
	}

	return 0;
}