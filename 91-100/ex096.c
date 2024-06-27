#include <stdio.h>
struct product_data {
	char name[20];
	int price;
};
void display3(struct product_data* prod);
main()
{
	struct product_data prod = { "eraser", 50 };
	display3(&prod);

	return 0;
}

void display3(struct product_data* prod)
{
	printf("%s	%d\n", prod->name, prod->price);
}