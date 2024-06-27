#include <stdio.h>
struct product_data
{
	char name[20];
	int price;
};
main()
{
	struct product_data product;
	struct product_data* p;

	p = &product;

	printf("Name = ");
	scanf("%s", p->name);
	p->price = 30;

	printf("p->name = %s\n", p->name);
	printf("p->price = %d\n", p->price);
	printf("product.name = %s\n", product.name);
	printf("product.price = %d\n", product.price);



	return 0;
}