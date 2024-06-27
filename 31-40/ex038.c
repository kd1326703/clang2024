#include <stdio.h>
main()
{
	int is;
	printf("Enter score : ");
	scanf("%f", &is);

	while (is >= 50 || is < 10) {
		printf("Error : Enter score between 10 and 49 : ");
		scanf("%f", &is);
	}

	switch (is / 10)
	{
		case 1 :
			printf("About 10 \n");
			break;

		case 2:
			printf("About 20 \n");
			break;

		case 3:
			printf("About 30 \n");
			break;

		case 4:
			printf("About 40 \n");
			break;
	}

	return 0;
}