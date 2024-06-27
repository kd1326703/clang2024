//1102010 kadai061.c
#include <stdio.h>
main()
{
	int i = 0;

	do {
		i++;	
		printf("%3d", i);
		if (i % 11 == 10) {
			printf("\n");
		}
	}while(i<20);

	return 0;
}