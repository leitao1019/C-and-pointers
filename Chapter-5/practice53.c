#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("enter two numbers\n");
    scanf("%d %d", &num1, &num2);

    if(num2 == 0)
    {
        printf("0 can not be division\n");
    }
    else
    {
        float result = (float) num1/num2;
        printf("%d/%d=%.2f\n", num1, num2, result);
    }
    return 0;
}
