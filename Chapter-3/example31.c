#include <stdio.h>

int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.77;
    double doubleVar = 8.234e+10;
    char charVar = 'W';

    long int numberOfPoints = 13107111000;

    _Bool boolVar = 0;

    printf ("integerVar = %i\n", integerVar);
    printf ("floatingVar = %f\n", floatingVar);
    printf ("doubleVar = %e\n", doubleVar);
    printf ("doubleVar = %g\n", doubleVar);
    printf ("charVar = %c\n", charVar);
    printf ("boolVar = %i\n", boolVar);

    return 0;
}
