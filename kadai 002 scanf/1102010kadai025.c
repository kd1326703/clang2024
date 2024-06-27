//1102010 kadai025.c
#include <stdio.h>
main()
{
    int n1;

    // 8진수로 정수 입력 받기
    printf("Octal number: ");
    scanf("%o", &n1);

    // 입력한 값을 10진수로 출력
    printf("Transfer to Decimal: %d\n", n1);

	return 0;
}