#include <stdio.h>

struct date 
{
    int year;
    int month;
    int day;
};

struct time
{
    int hour;
    int minute;
    int second;
};

_Bool isLeapYear(struct date d)
{
    _Bool leapYearFlag;

    if(d.year%4==0 && d.year%100!=0)
    {
        leapYearFlag = 1;
    }
    else
    {
        leapYearFlag = 0;
    }
    
    return leapYearFlag;
}

struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    int numberOfDays(struct date d);

    if(today.day != numberOfDays(today))
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year  = today.year;
    
    }
    else if(today.month == 12)
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

int numberOfDays(struct date d)
{
    int days;
    _Bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(isLeapYear(d) && d.month==2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month-1];
    }

    return days;
}

void main(void)
{
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Today? in mm dd yyyy\n");
    scanf("%d %d %d", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("Tomorrow is:%d-%d-%d\n", nextDay.month, nextDay.day, nextDay.year);
    return;
}
