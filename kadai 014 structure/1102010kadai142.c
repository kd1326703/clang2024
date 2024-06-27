//1102010 kadai142.c
#include <stdio.h>
#include <string.h>

struct class_data {
    char course[50];
    char subject[50];
    int unit;
};

int main()
{
    struct class_data school;

    printf("Course : ");
    gets(school.course);

    printf("Subject : ");
    gets(school.subject);

    printf("Unit : ");
    scanf("%d", &school.unit);

    printf("Course : %s\n", school.course);
    printf("Subject : %s\n", school.subject);
    printf("Unit : %d\n", school.unit);

	return 0;
}