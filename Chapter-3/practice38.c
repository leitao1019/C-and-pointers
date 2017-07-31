#include <stdio.h>

int main(void)
{
    int a, b, next;
    a = 365, b = 7;
    next = a + b - a % b;

    printf("a=%i, b=%i, Next=%i\n", a, b, next);

    a = 12258, b = 23;
    next = a + b - a % b;
    printf("a=%i, b=%i, Next=%i\n", a, b, next);

    a = 996, b = 4;
    next = a + b - a % b;
    printf("a=%i, b=%i, Next=%i\n", a, b, next);

    return 0;
}
