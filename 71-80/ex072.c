#include <stdio.h>
void display(int a); //������Ÿ�� ����
main()
{
	int a;
	printf("data? : ");
	scanf("%d", &a);
	display(a); //�Լ� display ȣ��
}

//�Լ� display ���
void display(int a)
{
	printf("data = %d\n", a);

	return 0;
}