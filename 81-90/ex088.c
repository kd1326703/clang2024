#include <stdio.h>
#include <string.h>
struct product_data {
	char name[20];
	int price;
};
main()
{
	struct product_data product1, product2;
	strcpy(product1.name, "pencil");
	product1.price = 30;
	product2 = product1;

	printf("product1.name = %s\n", product1.name);
	printf("product1.price = %d\n", product1.price);
	printf("product2.name = %s\n", product2.name);
	printf("product2.price = %d\n", product2.price);


	return 0;
}