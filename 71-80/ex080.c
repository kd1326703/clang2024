#include <stdio.h>
#define TBL_END 5
int tbl_sum4(int* p);
main()
{
	int a[] = { 10,20,30,40,50 }, sum;

	sum = tbl_sum4(a);
	printf("sum = %d\n", sum);

}

int tbl_sum4(int* p)
{
	int sum = 0, i = 0;

	while (i < TBL_END) {
		sum += *p;
		p++;
		i++;
	}

	return sum;
}