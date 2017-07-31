#include <stdio.h>

int main(void)
{
    int dollars, cents, count;

    for(count=1; count<=10; ++count)
    {
        printf("Enter dollars:\n"); 
        scanf("%d", &dollars);
        printf("Enter cents:\n"); 
        scanf("%d", &cents);
        printf("$%d.%.2d\n\n", dollars, cents);
    }
    return 0;
}
