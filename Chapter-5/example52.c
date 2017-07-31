#include <stdio.h>

int main(void)
{
    int num, score, sum, tmp_min, tmp_max, max=0, min=100, unpassNum=0, counter=0, count=0;

    
    printf("please enter the number you want to calc\n");
    scanf("%d", &num);

    while(counter < num)
    {
        printf("please enter the score:");
        scanf("%d", &score);
        
        if((0 <= score) && (100 >= score))
        {
            sum += score;
            count++;
            tmp_max = max;
            tmp_min = min;
            if(tmp_max < score)
            {
                max = score; 
            }

            if(tmp_min > score)
            {
                min = score; 
            }

            if(score < 60)
            {
                unpassNum++;
            }

        }
        else
        {
            printf("score:%i is uncorrect!\n", score);
        }

        counter++;
    }
    float avage = (float) sum / count;

    printf("\n\tmax score:%i\n\tmin score:%i\n\tavage score:%.2f\n", max, min, avage);
    printf("\tunpassed number:%i\n", unpassNum);
}
