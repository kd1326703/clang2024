#include <stdio.h>
main()
{
	int ia, is = 0;

	for (ia = 1; ia <= 10; ia++) {
		is += ia;
		printf("From 1 to %d (+) = %d \n",ia, is );
	}

	return 0;
}