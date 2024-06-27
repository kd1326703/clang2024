#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int data[20], i;

	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	printf("data[%d] = %d \n", i, data[i]);
	}

	printf("\n");
	int target, work;

	srand(time(0));
	for (i = 0; i < 20; i++) {
//		srand(time(0));
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;


		printf("%d", time(0));

		printf("data[%d] = %d \n", i, data[i]);
	}





	return 0;
}