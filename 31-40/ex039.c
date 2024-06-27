#include <stdio.h>
main()
{
	char cal;
	int ia, ib, ic;

	printf("Enter calculation : ");
	scanf("%c", &cal);

	printf("Enter three numbers : ");
	scanf("%d %d %d", &ia, &ib, &ic);

	switch (cal)
	{
	case 'b':
	case 'B':
	{

		break;
	}

	case 's':
	case 'S':
	{
		break;
	}

	case 't':
	case 'T':
	{
		printf("Toal is %d \n", ia + ib + ic);
		break;
	}

	case 'a':
	case 'A':
	{
		printf("Avrage is %.2f \n", (float)(ia + ib + ic) / 3);
		break;
	}


	default:
		break;
	}

	return 0;
}