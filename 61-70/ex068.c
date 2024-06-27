#include <stdio.h>
main()
{
	//ex068
	/**/int c;
	char dumy[256];

	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();

	}

	//ex068-1
	/*int a, b, c, ret;

	printf("Enter three numbers by space : ");
	ret = scanf("%d %d %d", &a, &b, &c);
	printf("ret = %d, a = %d, b = %d, c = %d\n", ret, a, b, c);

	printf("Enter whole number(Ctrl + Z three times to exit) a : ");
	while (scanf("%d", &a) != EOF) {
		printf("a = %d\n", a);
		printf("Enter whole number(Ctrl + Z three times to exit) a : ");
	}*/

	//ex068-2
	/*char str[256];

	while (gets(str) != NULL) {
		puts(str); //괄호 안의 문자열을 그대로 출력해서 줄바꿈문자(\n)를 문장 끝에 추가
	}*/

	return 0;
}