//1102010 kadai139.c
#include <stdio.h>
char star(char a, int b);
main()
{
	char let, s;
	int num;

	printf("Letter : ");
	scanf("%c", &let);
	printf("Number : ");
	scanf("%d", &num);

	s = star(let, num);
	printf("%c\n", s);


	return 0;
}

char star(char a, int b)
{
	int i = 0;

	while (i < b) {
		printf("%c", a);
		i++;
	}



}