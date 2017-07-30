#include <stdio.h>

int arrySum(int arry[], const int n)
{
    int sum=0, *ptr;
    int * const arryEnd=arry+n;

    for(ptr=arry; ptr<arryEnd; ptr++)
    {
        sum += *ptr; 
    }
    return sum;
}

void main(void)
{
    int arrySum(int arry[], const int n);
    int value[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("The sum is:%d\n", arrySum(value, 10));
    return;
}
