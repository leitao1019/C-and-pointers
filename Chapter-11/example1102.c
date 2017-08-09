#include <stdio.h>

void main(void)
{
    unsigned int w1=0525, w2=0707, w3=0122u;

    printf("%o  %o  %o  \n", w1&w2, w1|w2, w1^w2);
    printf("%o  %o  %o  \n", ~w1, ~w2, ~w3);
    printf("%o  %o  %o  \n", w1^w1, w1 & ~w2, w1|w2|w3);
    printf("%o  %o  \n", w1|w2&w3, w1|w2| ~w3);
    printf("%o  %o  \n", ~(~w1 & ~w2), ~(~w1 | ~w2));

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;
    printf("w1=%o  w2=%o\n", w1, w2);

    return;
}
