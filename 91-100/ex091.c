#include <stdio.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile* p;

	p = &data;

	printf("Name : ");
	gets(p->name);
	printf("Enter birthday by space: ");
	scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("Blood type : ");
	scanf("%s", p->blood);

	printf("%s --- / Born in %d. %d. %d. / blood type - %s\n",
		p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);



	return 0;
}