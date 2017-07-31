#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, j, num;
    printf("please enter a nunber:\n");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("num should greate than 1\n");
    }
    else
    {
        for(i=2; i<=num; i++)
        {
            bool flag = 1;
            //_Bool flag = 1;
            
            if(i%2 == 0)
            {
                flag = 0;
                continue;
            }

            for(j=2; j< i/2+1; j++)
            {
                if(i%j == 0)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
            {
                printf("Prime:%d\n", i);
            }
        }
    }
    return 0;
}
