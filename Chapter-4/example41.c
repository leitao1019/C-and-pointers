#include <stdio.h>

int main(void)
{
    int count = 1, counter;

    printf("please enter the times you want to run:\n");
    scanf("%i", &counter);
    for(count; count <= counter; count++)
    {
        int start = 1, end, sum=0;

        printf("\nplease enter the number you want to sum:\n");
        scanf("%i", &end);

        for(start; start <= end; start++)
        {
            sum += start;
        //    printf("the sum from 1 to %2i is %2i\n", start, sum);
        }

        printf("total sum of %2i is %2i\n", end, sum);
    }

    return 0;
}
