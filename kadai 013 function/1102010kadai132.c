//1102010 kadai132.c
#include <stdio.h>

main()
{
	int c, sum = 0, i = 0;
	int a;

	printf("Enter whole number(ctrl + z to exit) : ");
	a = scanf("%d", &c);
	while (a !=EOF) {
		/*if (a == EOF) {
			break;
		}*/	
		i++;
		sum += c;
		printf("Enter whole number(ctrl + z to exit) : ");
		a = scanf("%d", &c);
	}

	printf("Sum = %d\n", sum);
	printf("Avrage = %.1f\n", (float)sum / i);

	return 0;
}