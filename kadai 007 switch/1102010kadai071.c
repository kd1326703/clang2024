//1102010 kadai071.c
#include <stdio.h>
main()
{
	int i, j;
	char l;

	printf("Whole number1? : ");
	scanf("%d", &i);
	printf("Whole number2? : ");
	scanf("%d", &j);

	printf("Calculator? : ");
	scanf(" %c", &l);

	switch (l) {
	case '+': printf("%d %c %d = %d\n", i, l, j, i + j);
		break;
	case '-': printf("%d %c %d = %d\n", i, l, j, i - j);
		break;
	case '*': printf("%d %c %d = %d\n", i, l, j, i * j);
		break;
	case '/': if (j != 0) {
		printf("%d %c %d = %d\n", i, l, j, i / j);
		}
			else {
		printf("Error: Cannot be devided by zero.\n");
		}
	}

	return 0;
}