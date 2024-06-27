//1102010 kadai137.c
#include <stdio.h>
int check(char c);
main()
{
	char let;
	int i;

	printf("A alphabet letter : ");
	scanf("%c", &let);
	i = check(let);

	if (i == 0) {
		printf("Return value is %d, you entered small letter\n", i);
	}
	if (i == 1) {
		printf("Return value is %d, you entered Capital letter\n", i);
	}

	return 0;
}

int check(char c)
{
	int a;
	if (c >= 'a' && c <= 'z') {
		a = 0;
	}
	if (c >= 'A' && c <= 'Z') {
		a = 1;
	}
	
	return a;
}