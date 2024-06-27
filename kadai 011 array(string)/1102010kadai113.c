//1102010 kadai113.c
#include <stdio.h>
main()
{
	int i, cnt;
	char str[] = "Gamesoft";

	printf("String = ");
	i = 0, cnt = 0;
	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
		cnt++;
	}
	printf("\n");

	printf("Number of characters = %d \n", cnt);



	return 0;
}