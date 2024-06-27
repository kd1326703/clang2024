#include <stdio.h>
int add(int a, int b, int c);//변수 안써도 가능
float avr(int a, int b, int c);
main()
{
	int a, b, c, ans;
	printf("Enter three whole number : ");
	scanf("%d %d %d", &a, &b, &c);
	ans = add(a, b, c);
	printf("Sum = %d\n", add(a,b,c));
	printf("Avr = %.2f\n", avr(a,b,c));

}

int add(int a, int b, int c)
{
	int sum;
	sum = a + b + c;
	return sum;

}

float avr(int a, int b, int c)
{
	float avr;
	avr = (a + b + c) / 3;
	return avr;

	return 0;
}