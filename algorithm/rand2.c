#include <stdio.h>
#include <stdlib.h>//���� ��� �� �ʿ�
#include <time.h>//���� ��� �� �ʿ�

main()
{
	/*int dice;

	srand(time(0));//���� �ʱ�ȭ
	rand();

	dice = rand()%6+1;//0~32767 �������� ���� ���
	printf("Random dice is %d. \n", dice);*/

	//���� 1 : 0 ~ 99 �������� ���� a ���
	/*int a;
	srand(time(0));
	rand();

	a = rand() % 100;
	printf("Random number a is %d \n", a);*/

	//���� 2 : 10 ~ 50 b
	/*int b;
	srand(time(0));
	rand();

	b = rand() % 41 + 10;
	printf("Random number b is %d \n", b);*/

	//���� 2 : -100 ~ 200 c
	int c;
	srand(time(0));
	rand();

	c = rand() % 301 - 100;
	printf("Random number c is %d \n", c);



	return 0;
}