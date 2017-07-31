#include <stdio.h>

void copyStr(char *to, char *from)
{
    while(*from)
    {
        *to++ = *from++;
    }
    *to = '\0';
}

void main(void)
{
    void copyStr(char *to, char *from);
    char strFrom[]="copy string.";
    char strTo[100];

    copyStr(strTo, strFrom);
    printf("strTo:%s\n", strTo);

    copyStr(strTo, "copy completed!");
    printf("strTo:%s\n", strTo);
    return;
}
