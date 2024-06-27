//1102010 kadai073.c
#include <stdio.h>
main()
{
	int i;
	char l;

	printf("Decimal number? : ");
	scanf("%d", &i);

	printf("Alphabet(o or h or d)? : ");
	scanf(" %c", &l);

	switch (l)
	{
	case 'o': printf("%o\n", i);
		break;
	case 'O': printf("%o\n", i);
		break;
	case 'h': printf("%x\n", i);
		break;
	case 'H': printf("%X\n", i);
		break;
	case 'd': printf("%d\n", i);
		break;
	case 'D': printf("%d\n", i);
	}

	return 0;
}