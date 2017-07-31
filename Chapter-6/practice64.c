#include <stdio.h>

#define LENGTH 10

void main(void)
{
    int i=0;
    float number, sum=0, avag;
    float avage[10];
    
    while(i<LENGTH)
    {
        printf("number%d?\n", i+1);
        scanf("%f", &number);

        avage[i] = number;
        i++;
    }

    for(i=0; i<LENGTH; i++)
    {
        sum += avage[i];
    }
    avag = (float) sum/LENGTH;

    printf("avage:%f\n", avag);

}
