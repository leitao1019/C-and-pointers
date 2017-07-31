#include <stdio.h>

void main(void)
{
    int i, num;
    unsigned long long int factor(unsigned long int n);

    printf("number?\n");
    scanf("%d", &num);

    for(i=1; i<num; i++)
    {
        printf("%lu! = %llu \n", i, factor(i));
    }
    return;
}

unsigned long long int factor(unsigned long int n)
{
    unsigned long long int result;

    if(n==0) 
    {
        return 1;
    }
    else
    {
        result = n*factor(n-1);
    }

    return result;

}
