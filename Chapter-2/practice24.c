#include <stdio.h>

int main(void)
{
    int a = 10, b =20;
    int sum;

    sum = a + b;

    printf("The sum of %i and %i is: %i.\n", a, b, sum);
    printf("The sum of %#o and %#o is: %#o.\n", a, b, sum);
    printf("The sum of %#x and %#x is: %#x.\n", a, b, sum);
    return 0;
}
