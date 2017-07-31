#include <stdio.h>

int main(void)
{
    char c;
    printf("please enter a character\n");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'z')
    {
        printf("%c is a character.\n", c);
    }
    else if(c >= '0' && c <= '9')
    {
        printf("%c is a digital.\n", c);
    }
    else
    {
        printf("%c is special character.\n", c);
    }

    return 0;
}
