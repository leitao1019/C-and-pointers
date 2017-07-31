#include <stdio.h>

void main(void)
{
    int rate[11];
    int score, num, i, j=0;
    printf("enter times you want\n");
    int ret = scanf("%d", &num);

    if(ret < 1)
    {
        printf("unknow times\n");
        return;
    }
    else
    {
        for(i=1; i<11; i++)
        {
            rate[i] = 0;
        }

        while(j<num)
        {
            j++;
            printf("enter score:1 -> 10\n");
            int ret = scanf("%d", &score);

            if(ret < 1)
            {
                printf("unknow score\n");
                break;
            }

            if(score<1 || score>10)
            {
                printf("bad score\n");
            }
            else
            {
                rate[score]++;
            }
        }
    }

    for(i=1; i<11; i++)
    {
        printf("%2d -> sum:%2d\n", i, rate[i]);
    }
    return;
}
