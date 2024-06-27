#include <stdio.h>
main()

{
	//ex008
	
	/*float f1;
	f1 = 10.75;
	printf("f1 = %f \n", f1);
	printf("f1 / 2 = %f \n", f1 / 2);
	printf("f1 / 4 = %f \n", f1 / 4);*/

	//ex008-1

	/*int a = 5;
	float b;
	printf("a / 2 = %d \n", a / 2);
	b = a / 2;
	printf("a / 2 = %f \n", b);
	printf("a / 2 = %f \n", a / 2.0);*/

	//ex008-2

	float b = 5.0;
	//%a.b = 소수점 밑 포함 전체 a자릿수 중 b자리를 소수점 밑으로 출력
	//printf("b / 3 = %5.3f \n", b / 3.0);
	printf("b / 3 = %.3f \n", b / 3.0);
}