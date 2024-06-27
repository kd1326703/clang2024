//1102010 kadai128.c
#include <stdio.h>
main() 
{
    int a[30] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 0 }, * pa = a;
    int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42, 0 }, * pb = b;
    int i;

    while (*pa != 0 && *pb != 0) {
        *pb = *pa + *pb;
        pa++;
        pb++;
    }
    *pb = 0;

    printf("Array b = ");
    for (i = 0, pb = b ; *pb != 0; i++) {
        printf("%d ", *pb++);
    }
    printf("\n");

    return 0;
}