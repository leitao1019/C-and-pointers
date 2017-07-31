#include <stdio.h>

int main(void)
{
    int re, num, sum=0;
    char operator;

    while(1)
    {
        printf("Enter the number and operator:\n");
        re = scanf("%d %c", &num, &operator);

        if(re < 2)
        {
            printf("input error!\n");
            continue;
        }

        if(operator == '+')
        {
            sum += num;
            printf("the sum is:%d\n", sum);
        }
        else if(operator == '-')
        {
            sum -= num;
            printf("the sum is:%d\n", sum);
        }
        else if(operator == '*')
        {
            sum *= num;
            printf("the sum is:%d\n", sum);
        }
        else if(operator == '/')
        {
            if(num == 0)
            {
                printf("can't division 0\n");
                continue;
            }
            sum /= num;
            printf("the sum is:%d\n", sum);
        }
        else if(operator == 'S' || operator == 's')
        {
            sum = num;
            printf("the sum is:%d\n", sum);
        }
        else if(operator == 'E' || operator == 'e')
        {
            printf("the sum is:%d\n", sum);
            return 0;
        }
        else
        {
            printf("unknown operator:%c\n", operator);
            continue;
        }
    }
    return 0;
}
