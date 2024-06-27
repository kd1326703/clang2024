#include <stdio.h>
void strrev(char* s1, char* s2);

main()
{
	char str1[256], str2[256];

	printf("String? : ");
	gets(str1);

	strrev(str1, str2);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	return 0;
}
void strrev(char* s1, char* s2)
{
	int cnt;
	//'\0' 찾기 루프
	for (cnt = 0; *s1 != '\0'; cnt++, s1++);
	s1--;
	cnt--;

	while (cnt >= 0) {
		*s2 = *s1;
		s1--;
		s2++;
		cnt--;
	}
	*s2 = '\0';

}
