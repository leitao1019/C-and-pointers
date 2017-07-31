#include <stdio.h>

int strLength(const char *string)
{
    const char *cptr=string;
    while(*cptr)
    {
    	++cptr;
    }
    return cptr - string;
}

void main(void)
{
    int strLength(const char *string);

    printf("%s ", strLength("stringLength test."));
    printf("%s ", strLength(""));
    printf("%s ", strLength("complete."));

    return;
}
