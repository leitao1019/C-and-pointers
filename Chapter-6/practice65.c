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

    unsigned long long int Fibonacci_previous, Fibonacci_current, Fibonacci_next;

    Fibonacci_previous = 1;
    Fibonacci_current = 1;
    Fibonacci_next = 2;

    int i;
    for(i=1; i<num; i++)
    {
        Fibonacci_previous = Fibonacci_current;
        Fibonacci_current  = Fibonacci_next;
        Fibonacci_next = Fibonacci_current + Fibonacci_previous;

        printf("%d -> %d\n", i+2, Fibonacci_next);

    }

    return;

}
