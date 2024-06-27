#include <stdio.h>
main()
{
	char s[80];
	int i;

	printf("Enter letters : ");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("Encoded to '%s' \n", &s[0]);

	return 0;
}