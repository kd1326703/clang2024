//30% Ȯ���� "ȸ���� �ϰ�!(Critical)" ����ϱ�
#include <stdio.h>
main()
{
	int k;
	srand(time(0));
	rand();

	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("Critical! \n");
	}
	else {
		printf("Normal \n");
	}

	return 0;
}