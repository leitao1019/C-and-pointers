#include <stdio.h>

void main(void)
{
    int number;
    printf("how many numbers do you want?\n");
    scanf("%d", &number);

    int Prime[number];
    int i=2, j;

    for(j=0; j<number; j++)
    {
        Prime[j] = 0; 
    }

    while(i<=number)
    {
        for(j=1; j<i; j++)
        {
            if(i*j <= number)
            {
                Prime[i*j] = 1;
            }
        }
        i++;
    }

    for(j=0; j<number; j++)
    {
        if(Prime[j] != 0)
        {
            printf("Prime:%d\n", j);
        } 
    }
    return;
}
