//1102010 kadai13d.c
#include <stdio.h>
#include <string.h>
void con(char* x, const char* y);
int main()
{
	char c1[256] = "function, ";
	char c2[] = "do you know?";

	printf("Array c1 : %s\n", c1);
	printf("Array c2 : %s\n", c2);

	con(c1, c2);

	printf("String c1 after connected : %s\n", c1);

	return 0;
}

void con(char* x, const char* y)
{
	strcat(x, y);
}