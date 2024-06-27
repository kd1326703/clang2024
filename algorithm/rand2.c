#include <stdio.h>
#include <stdlib.h>//난수 사용 시 필요
#include <time.h>//난수 사용 시 필요

main()
{
	/*int dice;

	srand(time(0));//난수 초기화
	rand();

	dice = rand()%6+1;//0~32767 범위에서 난수 출력
	printf("Random dice is %d. \n", dice);*/

	//연습 1 : 0 ~ 99 범위에서 난수 a 출력
	/*int a;
	srand(time(0));
	rand();

	a = rand() % 100;
	printf("Random number a is %d \n", a);*/

	//연습 2 : 10 ~ 50 b
	/*int b;
	srand(time(0));
	rand();

	b = rand() % 41 + 10;
	printf("Random number b is %d \n", b);*/

	//연습 2 : -100 ~ 200 c
	int c;
	srand(time(0));
	rand();

	c = rand() % 301 - 100;
	printf("Random number c is %d \n", c);



	return 0;
}