#include <stdio.h>

int main(void)
{
    int i, num, triangularNumber;
    printf("please enter a number:\n");
    scanf("%d", &num);

    for(i=1; i <= num; i++)
    {
        triangularNumber = i*(i+1) / 2;
        if(triangularNumber % 5 == 0)
        {
            printf("%5d --> %7d\n", i, triangularNumber);
        }
    }
    return 0;

}
