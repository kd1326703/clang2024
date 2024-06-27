#include <stdio.h>
main()
{
	//ex034
	/*int ia = 1;

	do {
		printf("i = %d \n", ia++);
	} while (ia <= 10);*/

	//ex034-1
	/*int i, ia = 0;
	printf("Enter number : ");
	scanf("%d", &i);

	while (i <= 0) {
		printf("Error : Enter positive number : ");
		scanf("%d", &i);
	}

	do {
		printf("***** \n");
		i--;
	} while (i > ia);*/
	
	//ex034-2
	/*int i, ia;
	printf("Enter number : ");
	scanf("%d", &i);

	while (i <= 0) {
		printf("Error : Enter positive number : ");
		scanf("%d", &i);
	}

	do {
		ia = 0;
		do{
			printf("*");
			ia++;
		} while (ia < 5);
		printf("\n");
		i--;
	} while (i > 0);*/

	//ex034-3
	/*int i, ia, ib;
	printf("Enter number : ");
	scanf("%d", &i);

	while (i <= 0) {
		printf("Error : Enter positive number : ");
		scanf("%d", &i);
	}
	
	ia = 0;
	do {
		ib = 0;
		do {
			printf("*");
			ib++;
		} while (ib < ia + 1);
		printf("\n");
		ia++;
	} while (ia < i);*/

	//¡Úex034-4
	int i, ia, ib;
	printf("Enter number : ");
	scanf("%d", &i);

	while (i <= 0) {
		printf("Error : Enter positive number : ");
		scanf("%d", &i);
	}

	ia = 0;
	do {
		ib = 0;
		/*do {
			printf(" ");
			ib++;
		} while (ib < i - ia);*/
		while (ib < i - ia - 1) {
			printf(" ");
			ib++;
		}

		ib = 0;
		do {
			printf("*");
			ib++;
		} while (ib < ia + 1);
		printf("\n");
		ia++;
	} while (ia < i);

	//¡Ú¡Úex034-5
	/*int i, ia, ib;

	printf("Enter number : ");
	scanf("%d", &i);

		while (i <= 0) {
			printf("Enter positive number : ");
			scanf("%d", &i);
		}

		for (ia = 0; ia < i; ia++) {
			for (ib = 0; ib < i - ia -1; ib++) {
				printf(" ");
			}
			for (ib = 0; ib < ia + 1; ib++) {
				printf("*");
			}
			printf("\n");
		}*/

	return 0;
}