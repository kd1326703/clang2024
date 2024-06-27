#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int *pa;
	float* pb;
	int i, asum;
	float bsum;
	
	pa = a;
	for (asum = 0, i = 0; i < 6; i++) {
			asum += *pa;	
		pa++;
	}
	printf("%d, %.3f\n", asum, (float)asum/6);

	pb = b;
	for (bsum = 0, i = 0; i < 4; i++) {
		bsum += *pb;	
		pb++;
	}
	printf("%.3f, %.3f", bsum, bsum/4.0);


	return 0;
}