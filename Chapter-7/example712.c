#include <stdio.h>

void sort(int arr[], int n)
{
    int i, j, tmp;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                tmp = arr[j];
                arr[j]=arr[i];
                arr[i] = tmp;
            }
        }
    }
}

void main(void)
{
    int num;
    printf("how many numbers do you want?\n");
    scanf("%d", &num);

    int number[num];
    int i;
    for(i=0; i<num; i++)
    {
        printf("number?\n");
        scanf("%d", &number[i]);
    }
    
    sort(number, num);

    for(i=0; i<num; i++)
    {
        printf("%d\n", number[i]);
    }
    return;
}
