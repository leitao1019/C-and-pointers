#include <stdio.h>

void main(void)
{
    int i;
    char line[81];
    void readLine(char buffer[]);

    for(i=0; i<3; i++)
    {
        readLine(line); 
        printf("%s\n\n", line);
    }

    return;
}

void readLine(char buffer[])
{
    char character;
    int i=0;

    do
    {
        character = getchar();
        buffer[i] = character;
        i++;
    }
    while(character != '\n');

    buffer[i-1]='\0';
}
