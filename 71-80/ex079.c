#include <stdio.h>
int tbl_sum3(int tbl[], int number);

main()
{
	int a[] = { 10,20,30,40,50 }, sum;

	sum = tbl_sum3(a, 5);//�ι� ° �μ��� ������ ���� �ѱ��
	printf("sum = %d\n", sum);

}

int tbl_sum3(int tbl[], int number)
{
	int sum = 0, i = 0;

	while (i < number) {
		sum += tbl[i];
		i++;
	}
	return sum;
}