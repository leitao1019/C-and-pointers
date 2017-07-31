#include <stdio.h>

int main(void)
{
    float num1, num2, result;
    char  operator;

    printf("plase enter a expression\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    if(operator == '+')
    {
        result = num1 + num2;
    }
    else if(operator == '-')
    {
        result = num1 - num2;
    }
    else if(operator == '*')
    {
        result = num1 * num2;
    }
    else if(operator == '/')
    {
        if(num2 == 0)
        {
            printf("Division by 0.\n"); 
            return 0;
        }
        else
        {
            result = num1 / num2;
        }
    }
    else
    {
        printf("unknown operator %c\n", operator);
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}
