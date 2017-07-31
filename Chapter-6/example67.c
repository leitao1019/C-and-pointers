#include <stdio.h>

void main(void)
{
    int num, base;
    char out[64];
    const char baseDigit[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    printf("number to convert?\n"); 
    int ret1 = scanf("%d", &num);
    printf("Base?\n"); 
    int ret2 = scanf("%d", &base);

    if(ret1<1 || ret2<1)
    {
        printf("input ERROR!\n");
        return;
    }
    
    if(base<2 || base>16)
    {
        printf("only support base from 2 to 16\n");
        return;
    }

    printf("number:%d in base:%d is:\n", num, base);

    int index=0, remainder=0;

    while(num!=0)
    {
        //printf("number:%d, remainder:%d, index:%d\n", num, remainder, index);
        remainder = num % base;
        num /= base;
        out[index] = remainder;
        index++;
    }

    for(--index; index>=0; index--)
    {
        printf("%c", baseDigit[out[index]]);
    }

    printf("\n");
    return;
}
