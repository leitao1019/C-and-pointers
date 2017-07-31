#include <stdio.h>

int main(void)
{
    int num, r_digital, sum = 0;
    printf("please enter a number:\n");
    scanf("%d", &num);

    do {
        r_digital = num % 10;
        sum += r_digital;
        num = num / 10;
    
    }
    while(0 != num);

    printf("sum is %i\n", sum);
    return 0;
}
