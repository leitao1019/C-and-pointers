#include <stdio.h>
#include <stdbool.h>

bool alpha(const char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        return true; 
    }
    else
    {
        return false; 
    }
}

void readLine(char buff[])
{
    char character;
    int i=0;

    do
    {
        character = getchar();
        buff[i] = character;
    }
    while(character!='\n');
    
    buff[i-1]='\0';
}

int countWord(const char str[])
{
    int i, wordCount=0;
    bool lookingForWord=true, alpha(const char c);

    for(i=0; str[i]!='\0'; i++)
    {
        if(alpha(str[i]))
        {
            if(lookingForWord)
            {
                wordCount++;
                lookingForWord=false;
            }
        }
        else
        {
            lookingForWord=true; 
        }

        return wordCount;
    }

}

void main(void)
{
    char text[81];
    int totalWord=0;
    int countWord(const char str[]);
    void readLine(char buff[]);
    bool endOfText=false;

    printf("type in your text\n");
    printf("when you finished,press 'ENTER'.\n\n");

    while(!endOfText)
    {
        readLine(text);

        if(text[0]=='\0')
        {
            endOfText=true;
        }
        else
        {
            totalWord += countWord(text);
        }

        printf("\ntotally %d words.\n", totalWord);
    }

    return;
}
