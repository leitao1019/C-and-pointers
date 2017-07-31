#include <stdio.h>


void test(int *int_pointer)
{
    *int_pointer = 10;
}
void main(void)
{
    void test(int *int_pointer);
    int i=50, *p=&i;

    printf("Before call test i=%d\n", i);

    test(p);
    printf("After call test i=%d\n", i);

    return;
}
