#include <stdio.h>
main()
{
	int a = 100;
	int *p_a;

	p_a = &a;
	printf("a = %d\n", a);//a의 내용물
	printf("&a = %d\n", &a);//a의 주소
	printf("p_a = %d\n", p_a);//p_a의 내용물
	printf("*p_a = %d\n", *p_a);//p_a가 지정하는 변수의 내용 출력
	printf("&p_a = %d\n", &p_a);//p_a의 주소 출력





	return 0;
}