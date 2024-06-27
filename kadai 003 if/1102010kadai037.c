//1102010 kadai037.c
#include <stdio.h>
main()
{
	int no;
	printf("whole number from 0 to 100 : ");
	scanf("%d", &no);

	if (no >= 90) {
		printf("Result is 5 \n");
	}

	else {
		if (no >= 80 && no < 90) {
			printf("Result is 4 \n");
		}

		else {
			if (no >= 50 && no < 80) {
				printf("Result is 3 \n");
			}

			else {
				if (no >= 30 && no < 50) {
					printf("Result is 2 \n");
				}

				else {
					printf("Result is 1 \n");
				}
			}
		}
	}

	return 0;
}