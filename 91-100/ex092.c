#include <stdio.h>
struct product_data
{
	char name[20];
	int price;
	int num;
};
main()
{
	struct product_data prod[3] =
	{
		{"pencil", 30, 5},{"eraser", 50, 2},{"pencil case", 500, 3}
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("Name : %s\t", prod[i].name);
		printf("Price : %d\t", prod[i].price);
		printf("Number : %d\n", prod[i].num);

	}



	return 0;
}