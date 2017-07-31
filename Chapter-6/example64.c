#include <stdio.h>

void main(void)
{
    int num;
    printf("please enter a nunber:\n");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("num should greate than 1\n");
    }
    else
    {
        int arr[num];
        arr[0] = 2;

        int i, j, ind = 1;

        for(i=3; i<=num; i++)
        {
            _Bool flag = 1;

            //for(j=0; j<ind; j++)
            for(j=0; i>=arr[j]*arr[j]; j++)
            {
                if(i % arr[j] == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
            {
                arr[ind] = i;
                ind++;
            }
        }
        for(i=0; i<ind; i++)
        {
            printf("Prime:%d\n", arr[i]);
        }
    }
    return;
}
