#include <stdio.h>
main()
{
	int un, i;
	srand(time(0));
	rand();

	un = rand() % 5 + 1;
	printf("today's your luck is");

	for (i = 0; i < un; i++) {
		printf("��");
	}
	printf("\n");

	return 0;
}