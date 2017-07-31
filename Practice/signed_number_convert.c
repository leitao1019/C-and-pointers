#include <stdio.h>

void main(void)
{
    typedef int                 INT32;
    typedef short               INT16;

    INT16 Length16;
    INT32 Length32, New32;

    Length32 = 0X0000FFD8;
    Length16 = (INT16) Length32;
    New32    = Length16;

    printf("Old32:%x: %d\n", Length32, Length32);
    printf("Leg16:%x: %d\n", Length16, Length16);
    printf("New32:%x: %d\n", New32, New32);
    return;
}
