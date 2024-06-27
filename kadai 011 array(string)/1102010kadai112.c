//1102010 kadai112.c
#include <stdio.h>
main()
{
	char data1[] = "String";
	char data2[] = "";
	int i = 0;

	printf("(Before) Array data1[] = ");
	while (data1[i] != '\0') {
		printf("%c", data1[i]);
		i++;
	}
	printf("\n");

	i = 0;
	while (data1[i] != '\0') {
		data2[i] = data1[i];
		i++;
	}
	data2[i] = '\0';

	i = 0;
	printf("(After) Array data2[] = ");
	while (data2[i] != '\0') {
		printf("%c", data2[i]);
		i++;
	}
	printf("\n");

	return 0;
}