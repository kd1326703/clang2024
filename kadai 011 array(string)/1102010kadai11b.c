//1102010 kadai11b.c
#include <stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;

	printf("Enter number(0~6) : ");
	scanf("%d", &i);

	while (i < 0 || i>6) {
		printf("Error: Enter number(0~6) : ");
		scanf("%d", &i);
	}

	puts(day[i]);

	return 0;
}