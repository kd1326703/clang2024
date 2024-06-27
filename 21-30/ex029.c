#include <stdio.h>
main()
{
	//ex029
	/*int num, i = 0;
	printf("Enter number : ");
	scanf("%d", &num);

	while (i < num) {
		printf("*");
		i++;
	}*/

	//ex029-1
	int num;
	printf("Enter number : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("*");
		num--;
	}

	return 0;
}