#include <stdio.h>

int main(void)
{
    int i,end;
    printf("please enter a number:\n");
    scanf("%d", &end);

    printf("%5s    %10s\n", "n", "n*n");
    printf("-----    ----------\n");

    for(i=1; i <= end; i++)
    {
        printf("%5d    %10d\n", i, i*i);
    }
    return 0;

}
