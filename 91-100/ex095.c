#include <stdio.h>
struct product_data {
	char name[20];
	int price;
};
void display1(int a);
void display2(struct product_data prod);
main()
{
	int a = 10;
	struct product_data prod = { "eraser", 50 };
	display1(a);
	display2(prod);


	return 0;
}

void display1(int a)
{
	printf("a = %d\n", a);
}
void display2(struct product_data prod)
{
	printf("prod.name = %s	prod.price = %d\n", prod.name, prod.price);
}