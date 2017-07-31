#include <stdio.h>

int main(void)
{
    float x = 2.55, result;

    result = 3*x*x*x - 5*x*x + 6;
    printf("x=%f, 3*x*x*x-5*x*x+6=%f\n", x, result);
    return 0;
}
