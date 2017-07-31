#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("enter 2 numbers:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 % num2 == 0)
    {
        printf("%d can division by %d\n", num1, num2);
    }
    else
    {
        printf("%d can't division by %d\n", num1, num2);
    }
    return 0;
}
