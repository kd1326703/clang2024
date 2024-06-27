//1102010 kadai116.c
#include <stdio.h>
main()
{
	int i, j;
	char a[128], b[128];

	printf("String1? : ");
	gets(a);
	printf("String2? : ");
	gets(b);


	for (i = 0; a[i] != '\0'; i++);
	//strcat(a,b);
	for (j = 0; b[j] != '\0'; i++, j++) {
		a[i] = b[j];
	}
	a[i] = '\0';

	printf("%s\n", &a[0]);

	return 0;
}