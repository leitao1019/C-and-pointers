#include <stdio.h>

void main(void)
{
    long num;

    printf("how many Fibonacci numbers do you want?\n");
    int re = scanf("%ld", &num);

    if(re<1)
    {
        printf("incorrect num.\n");
        return;
    }
    if(num < 2)
    {
        printf("number is too small\n");
        return;
    }

    unsigned long long int Fibonacci[num];
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    int i;
    for(i=2; i<num; i++)
    {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for(i=0; i<num; i++)
    {
        printf("%d -> %llu\n", i, Fibonacci[i]);
    }
    return;

}
