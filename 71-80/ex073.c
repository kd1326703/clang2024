#include <stdio.h>
void error_msg(void); //프로토타입 선언
main()
{
	int a, b;
	printf("data1, data2? : ");
	scanf("%d %d", &a, &b);
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d / %d = %d...%d\n", a, b, a / b, a % b);
	}

}

void error_msg(void)
{
	printf("Error: Can't be devided by 0.\n");

	return 0;
}