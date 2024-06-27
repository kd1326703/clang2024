#include <stdio.h>
main()
{
	int no, pl = 0;
	printf("Enter number : ");
	scanf("%d", &no);

	while (pl <= 10) {
		printf("%d + %d = %d \n", no, pl, no + pl);
		pl++;
	}

	return 0;
}