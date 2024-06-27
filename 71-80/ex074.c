#include <stdio.h>
void display1(int n1);
void display2(int* n2);
main()
{
	int a, b;
	printf("Number a? : ");
	scanf("%d", &a);
	display1(a); //display1 호출
	printf("a = %d\n\n", a);

	printf("Number b? : ");
	scanf("%d", &b);
	display2(&b); //display2 호출
	printf("b = %d\n\n", b);

}

//display1
void display1(int n)
{
	printf("Number a is %d\n", n);
	n += 10;
	return ;

}

//display2
void display2(int *n)
{
	printf("Number b is %d\n", *n);
	*n += 10;

	return ;
}