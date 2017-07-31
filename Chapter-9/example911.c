#include <stdio.h>

int strtoint(const char string[])
{
    int i, intValue, result =0;

    for(i=0; string[i]>='0'&&string[i]<='9'; i++)
    {
        intValue = string[i] - '0';
        result = result*10 + intValue;
    }
    return result;
}

void main(void) 
{
    int strtoint(const char string[]);

    printf("%i\n", strtoint("245"));
    printf("%i\n", strtoint("100")+25);
    printf("%i\n", strtoint("13*5"));

    return;
}
