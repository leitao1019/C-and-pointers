#include <stdio.h>

void main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 7;
    datePtr->day   = 25;
    datePtr->year  = 2017;

    printf("date:%2d-%2d-%4d\n",datePtr->month, datePtr->day, datePtr->year);
    return;
}
