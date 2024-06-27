#include <stdio.h>
main()
{
	int year;
	printf("You are born in : ");
	scanf("%d", &year);

	if (year >= 1989)
	{
		printf("You are born in Heisei \n");
	}
	else
	{
		printf("You are born in Showa \n");
	}

	return 0;
}