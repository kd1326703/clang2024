#include <stdio.h>
void display(int a); //프로토타입 선언
main()
{
	int a;
	printf("data? : ");
	scanf("%d", &a);
	display(a); //함수 display 호출
}

//함수 display 기술
void display(int a)
{
	printf("data = %d\n", a);

	return 0;
}