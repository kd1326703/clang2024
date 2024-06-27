//1102010 kadai099.c
#include <stdio.h>
main()
{
	int i, cnt;
	char str[16];

	printf("Enter the number of times and string : ");
	scanf("%d %s", &cnt, &str);

	for (i = 0; i < cnt; i++) {
		printf("%s\t", str);
	}
	printf("\n");





	return 0;
}