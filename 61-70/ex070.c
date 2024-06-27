#include <stdio.h>
int add(int a, int b); //프로토타입 선언
main()
{
	int a, b, ans;
	printf("Enter two whole number : ");
	scanf("%d %d", &a, &b);
	ans = add(a, b); // 함수 add 호출
	printf("Sum = %d\n", ans);
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return(sum);

	return 0;
}