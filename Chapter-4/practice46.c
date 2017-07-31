#include <stdio.h>

int main(void)
{
    int n, two_2_n;
    printf("TABLE OF POWERS OF TWO\n");
    printf("n   2 to the n\n");
    printf("--- ----------\n");
    two_2_n = 1;
    for(n=1; n<=10; ++n)
    {
        printf("%-3i %-10i\n", n, two_2_n);
        two_2_n = two_2_n*2;
    }
    return 0;
}
