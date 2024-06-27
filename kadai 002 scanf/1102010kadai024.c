//1102010 kadai024.c
#include <stdio.h>
main()
{
	int n1, n2;
	printf("µÎ °³ÀÇ ¼öÄ¡? : ");
	scanf("%d %d", &n1, &n2);

	printf("***%dªÈ%dªÎÞÌöÎæÑß©*** \n", n1, n2);

	printf("%d + %d = %d \n", n1, n2, n1 + n2);
	printf("%d - %d = %d \n", n1, n2, n1 - n2);
	printf("%d * %d = %d \n", n1, n2, n1 * n2);
	printf("%d / %d = %d ª¢ªÞªê %d \n", n1, n2, n1 / n2, n1 % n2);

	return 0;
}