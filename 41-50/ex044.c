#include <stdio.h>
main()
{
	char str1[80], str2[80]/*, w[80]*/;
	int i;

	printf("Enter string 1 : ");
	scanf("%s", &str1[0]);
	printf("Enter string 2 : ");
	scanf("%s", &str2[0]);

	printf("Word1 = %s,Word2 = %s \n", &str1[0], &str2[0]);
	printf("Change each other \n");

	/*for (i = 0; w[i] = str1[i]; i++);
	for (i = 0; str1[i] = str2[i]; i++);
	for (i = 0; str2[i] = w[i]; i++);*/

	printf("Word1 = %s,Word2 = %s \n", &str2[0], &str1[0]);

	return 0;
}