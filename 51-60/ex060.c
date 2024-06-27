#include <stdio.h>
main()
{
	char data[15] = "Language", * pdata, let;
	int i;

	printf("data[] = %s\n", data);

	printf("letter what you want : ");
	scanf("%c", &let);

	printf("Found at ");
	for (pdata = data, i = 0; *(pdata + i) != '\0'; i++) {
		if (let == *(pdata + i)) {
			printf("%d ", i + 1);
		}
	}
	printf("\n");

	


	return 0;
}