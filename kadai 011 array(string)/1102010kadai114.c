//1102010 kadai114.c
#include <stdio.h>
main()
{
	int i, cnt = 0;
	char str[] = "";

	printf("String? = ");
	scanf("%s", str);

	printf("String : ");
	for (i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
		cnt++;
	}
	printf("\n");

	printf("Number of characters = %d \n", cnt);

	return 0;
}