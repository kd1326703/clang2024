#include <stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int letters;

	printf("String? : ");
	gets(buf);
	letters = strcnt(buf);
	printf("The number of letters is %d\n", letters);

}

int strcnt(char *p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return cnt;
}