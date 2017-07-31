#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

void main(void)
{
    int re, num, r_digit, c=0, x, y;
    printf("please enter a number\n");
    re = scanf("%d", &num);

    if(re < 1)
    {
        printf("input incorrect!\n");
        return;
    }

    do
    {
        if(num < 0)
        {
            num = -num;
            printf("minus ");
        }
        r_digit = (int) num % 10;
        c++;
        x=80-6*c;
        y=4;
        //gotoxy(x,y);

        switch (r_digit)
        {
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            case 0:
                printf("zero ");
                break;
            default:
                printf("unknown");
                break;
        }
        num = num / 10;
    } while(num != 0);
    printf("\n");
}
