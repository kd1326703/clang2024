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
	struct product_data* p = prod;
	int i;

	for (i = 0; i < 3; i++, p++) {
		printf("Name : %s\t", p->name);
		printf("Price per number : %d\t", p->price);
		printf("Number : %d\t", p->num);
		printf("Price : %d\n", p->price * p->num);
	}

	return 0;
}