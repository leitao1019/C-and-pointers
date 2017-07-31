#include <stdio.h>

int main(void)
{
    int num, r_digital;
    _Bool flag;

    printf("please enter a number:\n");
    scanf("%d", &num);

    do {
        if(num < 0)
        {
            num = -num;
            flag = 1;
        }
        r_digital = num % 10;
        printf("%i", r_digital);
        num = num / 10;
    
    }
    while(0 != num);

    if(flag)
    {
        printf("-");
    }

    printf("\n");
    return 0;
}
