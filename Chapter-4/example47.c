#include <stdio.h>

int main(void)
{
    int u, v, tmp;

    printf("please enter two numbers:\n");
    scanf("%d%d", &u, &v);

    while(0 != v)
    {
        tmp = u % v;
        u = v;
        v = tmp;
    }

    printf("the greater common divisor is %i\n", u);
    return 0;
}
