#include <stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data;

	printf("Name : ");
	gets(data.name);
	printf("Enter birthday by space: ");
	scanf("%d %d %d", &data.birth[0], &data.birth[1], &data.birth[2]);
	printf("Blood type : ");
	scanf("%s",data.blood);

	printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
		data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);

	return 0;
}