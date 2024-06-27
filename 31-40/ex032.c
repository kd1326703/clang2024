#include <stdio.h>
main()
{
	int ia, im;	
	printf("Enter number : ");
	scanf("%d", &ia);

	for (im = 1; im <= 5; im++) {
		printf("%d ", ia * im);
	}
		
	return 0;
}