#include <stdio.h>
main()
{
	int a = 100;
	int *p_a;

	p_a = &a;
	printf("a = %d\n", a);//a�� ���빰
	printf("&a = %d\n", &a);//a�� �ּ�
	printf("p_a = %d\n", p_a);//p_a�� ���빰
	printf("*p_a = %d\n", *p_a);//p_a�� �����ϴ� ������ ���� ���
	printf("&p_a = %d\n", &p_a);//p_a�� �ּ� ���





	return 0;
}