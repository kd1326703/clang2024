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
		printf("%d�� %d���� %d��ŭ ũ�� \n", n1, n2, n1 - n2);
	}

	else{
		if (n1 < n2) {
			printf("%d�� %d���� %d��ŭ �۴� \n", n1, n2, n2 - n1);
		}

		else {
			printf("�� ���� ���� \n");
		}
		}
	return 0;
}