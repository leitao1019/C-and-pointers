#include <stdio.h>

int main(void)
{
    int i=1, j=1, num, result=1;
    printf("please enter a number:\n");
    scanf("%d", &num);

    for(i; i<=num; i++)
    {
        for(j; j<=i; j++)
        {
            result = result*j; 
        }
        printf("%3d    %9d\n", i, result);
    }
    return 0;
}
