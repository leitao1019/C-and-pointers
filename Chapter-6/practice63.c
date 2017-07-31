#include <stdio.h>

void main(void)
{
    int num;

    printf("enter the arry length\n");
    int re = scanf("%d", &num);

    if(re<1)
    {
        printf("incorrect num.\n");
        return;
    }
    if(num < 2)
    {
        printf("number is too small\n");
        return;
    }

    int arr[num];
    arr[0] = 0;
    arr[1] = 1;

    int i, j;
    for(i=2; i<num; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(j=0; j<num; j++)
    {
        printf("%d -> %d\n", j, arr[j]);
    }
    return;

}
