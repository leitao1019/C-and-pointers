#include <stdio.h>
#include <stdbool.h>

bool equalString(const char s1[], const char s2[])
{
    int i=0;
    bool equalFlag;

    while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
    {
        i++;
    }

    if(s1[i]=='\0' && s2[i]=='\0')
    {
        equalFlag = true;
    }
    else
    {
        equalFlag = false;
    }

    return equalFlag;
}

void main(void)
{
    bool equalString(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";

    printf("%i\n", equalString(stra, strb));
    printf("%i\n", equalString(stra, stra));
    printf("%i\n", equalString(strb, "string"));

    return;
}
