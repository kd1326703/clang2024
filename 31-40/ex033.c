#include <stdio.h>
main()
{
	int ia, in, is;
	float ir = 0;
	printf("Enter number : ");
	scanf("%d", &ia);

	//�ʱⰪ�� 0�̰ų� ó������ ������ ���� ó��(����) ����
	for (is = 0, in = 0; ia != -999; in++) {
		is += ia;
		printf("Enter number : ");
		scanf("%d", &ia);
	}

	ir = (float)is / in;
	printf("Total = %d,  Average = %.2f\n", is, ir / in);
}