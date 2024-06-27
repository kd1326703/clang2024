#include <stdio.h>
main()
{
	int a, b;
	srand(time(0));
	rand();
	printf("Choose one \n1: Rock, 2: Scissors 3: Paper > ");
	scanf("%d", &a);

	while (a < 1 || a > 3) {
		printf("Enter between 1 and 3 > ");
		scanf("%d", &a);
	}

	printf("\n");
	b = rand() % 3;

	switch (a) {
	case 1:printf("You choose rock. \n");
		break;
	case 2:printf("You choose scissors. \n");
		break;
	case 3:printf("You choose paper. \n");
	}

	switch (b) {
	case 0:printf("Com choose rock. \n");
		break;
	case 1:printf("Com choose scissors. \n");
		break;
	case 2:printf("Com choose paper. \n");
	}

	switch (((a - 1) - b + 3) % 3) {
	case 0:printf("\nDraw. \n");
		break;
	case 1:printf("\nYou lose. \n");
		break;
	case 2:printf("\nYou win. \n");
	}
	return 0;
	
}