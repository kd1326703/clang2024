//1102010 kadai141.c
#include <stdio.h>
#include <string.h>

struct class_data {
    char course[50];
    char subject[50];
    int unit;
};

int main(void) {
    struct class_data school;

    strcpy(school.course, "Gamesoft Course 1");
    strcpy(school.subject, "C Language");
    school.unit = 8;

    printf("Course : %s\n", school.course);
    printf("Subject : %s\n", school.subject);
    printf("Unit : %d\n", school.unit);

    return 0;
}
