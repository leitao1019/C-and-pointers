#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
} firstDay;

char *week[7]={
    "Sunday", 
    "Monday", 
    "Tuesday", 
    "Wednsday", 
    "Thursday", 
    "Friday", 
    "Saturday"};

int calc(struct date d)
{
    int m_year, m_month, m_day, days;

    if(d.month>2)
    {
        m_year = d.year;    
        m_month = d.month + 1;
    }
    else
    {
        m_year = d.year - 1;
        m_month = d.month + 13;
    }

    if(d.year>=1900 && d.month>=3)
    {
        days = 1461*m_year/4 + 153*m_month/5 + d.day;
        //printf("Debug1: 1461*%d/4 + 153*%d/5 + %d\n",m_year,m_month,d.day);
    }
    else if(d.year>=1800 && d.month>=3)
    {
        days = 1461*m_year/4 + 153*m_month/5 + d.day + 1;
        //printf("Debug2: 1461*%d/4 + 153*%d/5 + %d + 1\n",m_year,m_month,d.day);
    }
    else if(d.year>=1700 && d.month>=3)
    {
        days = 1461*m_year/4 + 153*m_month/5 + d.day + 2;
        //printf("Debug3: 1461*%d/4 + 153*%d/5 + %d + 1\n",m_year,m_month,d.day);
    }
    else
    {
        printf("not support!\n");
    }

    return days;
}

void main(void)
{
    int calc(struct date d);
    int numberOfDays;
    

    printf("date in yyyy mm dd?\n");
    scanf("%d %d %d", &firstDay.year, &firstDay.month, &firstDay.day);
    
    numberOfDays = calc(firstDay);

    int weekday = (numberOfDays - 621049) % 7;

    printf("%d-%d-%d is %s.\n", firstDay.year, firstDay.month, firstDay.day, week[weekday]);

    return;
}
