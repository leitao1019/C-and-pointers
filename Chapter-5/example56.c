#include <stdio.h>

int main(void)
{
    float num1, num2, result;
    char  operator;

    printf("plase enter a expression\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0)
            {
                printf("Division by 0.\n"); 
                return 0;
            }
            else
            {
                result = num1 / num2;
                break;
            }
        default: 
            printf("unknown operator %c\n", operator);
            break;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}
