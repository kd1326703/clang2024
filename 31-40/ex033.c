#include <stdio.h>
main()
{
	int ia, in, is;
	float ir = 0;
	printf("Enter number : ");
	scanf("%d", &ia);

	//초기값이 0이거나 처리식이 없으면 공백 처리(생략) 가능
	for (is = 0, in = 0; ia != -999; in++) {
		is += ia;
		printf("Enter number : ");
		scanf("%d", &ia);
	}

	ir = (float)is / in;
	printf("Total = %d,  Average = %.2f\n", is, ir / in);
}