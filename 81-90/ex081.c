#include <stdio.h>
int max(int* p, int num);
int min(int* p, int num);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };

	printf("Max = %d\n", max(data, 8));
	printf("min = %d\n", min(data, 8));

}

int max(int* p, int num)
{
	int max, i = 0;

	max = *p;

	while (i < num - 1) {
		p++; //다음 데이터로 이동
		if (max < *p) {
			max = *p;
		}
		i++;
	}

	return max;
}

int min(int* p, int num)
{
	int min, i = 0;

	min = *p;
	p++; //다음 데이터로 이동
	while (i < num - 1) {
		if (*p < min) {
			min = *p;
		}
		p++;
		i++;
	}


	return min;
}