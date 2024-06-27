//1102010 kadai036.c
#include <stdio.h>
main()
{
	int n1, n2;
	printf("no1? : ");
	scanf("%d", &n1);
	printf("no2? : ");
	scanf("%d", &n2);

	if (n1 > n2) {
		printf("%d는 %d보다 %d만큼 크다 \n", n1, n2, n1 - n2);
	}

	else{
		if (n1 < n2) {
			printf("%d는 %d보다 %d만큼 작다 \n", n1, n2, n2 - n1);
		}

		else {
			printf("두 값은 같다 \n");
		}
		}
	return 0;
}