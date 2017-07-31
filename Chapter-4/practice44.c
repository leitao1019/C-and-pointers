#include <stdio.h>

int main(void)
{
    int i, num, result;
    printf("please enter a number:\n");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        result = i*i;
        printf("%3d    %9d\n", i, result);
    }
    return 0;
}
