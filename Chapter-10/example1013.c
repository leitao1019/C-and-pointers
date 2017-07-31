#include <stdio.h>

void copyStr(char *to, char *from)
{
    for(; *from!='\0'; from++, to++)
    {
    	*to = *from;
    }
    *to = '\0';
}

void main(void)
{
    void copyStr(char *to, char *from);
    char strFrom[]="this string will be copied!";
    char strTo[50];

    copyStr(strTo, strFrom);
    printf("strTo:%s\n", strTo);

    copyStr(strTo, "So is this.");
    printf("strTo:%s\n", strTo);

    return;
}
