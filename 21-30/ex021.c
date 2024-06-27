#include <stdio.h>
main()
{
	int no;
	printf("Enter number : ");
	scanf("%d", &no);

	if (no > 0)
		{
		printf("You entered positive number \n");
		}
	else if (no == 0)
		{
		printf("You entered 0 \n");
		}
	else if (no < 0)
		{
		printf("You entered negative number \n");
		}

	return 0;
}