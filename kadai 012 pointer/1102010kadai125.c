//1102010 kadai125.c
#include <stdio.h>
int main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd, i;

	pd = data;
	printf("Array data(fixed) = ");
	for (i = 0; *(pd + i) != -999; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\n");
	printf("Array data(changed) = ");
	for (pd = data; *pd != -999; pd++) {
		printf("%d ", *pd);
	}

	return 0;
}