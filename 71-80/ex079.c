#include <stdio.h>
int tbl_sum3(int tbl[], int number);

main()
{
	int a[] = { 10,20,30,40,50 }, sum;

	sum = tbl_sum3(a, 5);//두번 째 인수로 데이터 수를 넘긴다
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