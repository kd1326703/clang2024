#include <stdio.h>
int add(int a, int b); //������Ÿ�� ����
main()
{
	int a, b, ans;
	printf("Enter two whole number : ");
	scanf("%d %d", &a, &b);
	ans = add(a, b); // �Լ� add ȣ��
	printf("Sum = %d\n", ans);
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return(sum);

	return 0;
}