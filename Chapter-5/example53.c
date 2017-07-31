#include <stdio.h>

int main(void)
{
    int year;
    printf("please enter the year:\n");
    scanf("%d", &year);

    if( (year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not leap year\n", year); 
    }

    return 0;
}
