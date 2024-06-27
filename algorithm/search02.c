#include <stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("Enter number : ");
	scanf("%d", &s);

	for (d[10] = s, i = 0; s != d[i]; i++);

	if (i == 10) {
		printf("Not found \n");
	}
	else {
		printf("Found %d at d[%d] \n", s, i);
	}

	return 0;
}