#include <stdio.h>
main()
{
	char cal;
	printf("Enter operator : ");
	scanf("%c", &cal);

	switch (cal)
	{
	case '+':
		printf("Plus \n");
		break;

	case '-':
		printf("Minus \n");
		break;

	case '*':
		printf("Multify \n");
		break;

	case '/':
		printf("Divided \n");
		break;

	case '%':
		printf("Rest \n");
		break;

	default:
		printf("The others \n");
		break;
	}

	return 0;
}