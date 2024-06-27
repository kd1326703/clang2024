#include <stdio.h>
main()
{
	//ex057
	/*int tbl[][3] = {{10,20,30},{40,50,60},{70,80,90}};
	int* ptbl, i, j, a;

	ptbl = tbl[0];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		printf("%d ", *ptbl++);
		}
		printf("\n");
	}*/

	//ex057-1
	/*int tbl[][3] = {{10,20,30},{40,50,60},{70,80,90}};
	int* ptbl, i, j;

	ptbl = tbl[1];

	for (j = 0; j < 3; j++) {
		printf("%d ", *ptbl++);
	}
	printf("\n");*/


	//ex057-2
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* ptbl, i, j;

	ptbl = &tbl[0][1];

	for (i = 0; i < 3; i++) {
		printf("%d ", *ptbl);
		ptbl += 3;
	}
	printf("\n");

	return 0;
}