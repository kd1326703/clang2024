#include <stdio.h>

int tbl_sum1(int* p);
int tbl_sum2(int tbl[]);
int tbl_sum1a(int* p);

main()
{
	int a[] = { 10,20,30,40,-999 }, sum;

	sum = tbl_sum1(a);
	printf("sum = %d\n", sum);

	sum = tbl_sum2(a);
	printf("sum = %d\n", sum);

	sum = tbl_sum1a(a);
	printf("sum = %d\n", sum);

}

int tbl_sum1(int* p)
{
	int sum = 0;

	while (*p != -999) {
		sum += *p;
		p++;
	}
	return(sum);

}

int tbl_sum2(int tbl[])
{
	int sum = 0, i = 0;

	while (tbl[i] != -999) {
		sum += tbl[i];
		i++;
	}
	return (sum);
}

//포인터가 받은주소를 고정해서 사용
int tbl_sum1a(int* p)
{
	int sum = 0, i = 0;

	while (*(p + i) != -999) {
		sum += *(p + i);
		i++;
	}
	return(sum);

}