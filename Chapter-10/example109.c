#include <stdio.h>

void exchange(int * const p1, int * const p2)
{
    int temp;

    temp = *p1;
    *p1  = *p2;
    *p2  = temp;

    return;
}

int main(void)
{
    void exchange(int * const p1, int * const p2);

    int i1=15, i2=105, *p1=&i1, *p2=&i2;

    printf("i1=%d, i2=%d \n", i1, i2);

    exchange(p1, p2);
    printf("i1=%d, i2=%d \n", i1, i2);

    exchange(&i1, &i2);
    printf("i1=%d, i2=%d \n", i1, i2);
    
    return;

}
