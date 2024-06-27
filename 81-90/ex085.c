#include <stdio.h>
void Str_cat(char* s1, char* s2);
main()
{
	char a[256], b[256];

	printf("Array a : ");
	gets(a);
	printf("Array b : ");
	gets(b);

	Str_cat(a, b);
	printf("Array a : %s\n", a);
	
	return 0;
}

void Str_cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}