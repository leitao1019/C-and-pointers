#include <stdio.h>
#include <stdbool.h>

struct dict
{
    char word[15];
    char define[50];
};

bool equalStr(const char s1[], const char s2[])
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

int lookup(const struct dict dictionary[], const char search[], const int index)
{
    int i;
    bool equalStr(const char s1[], const char s2[]);

    for(i=0; i<index; i++)
    {
        if(equalStr(search, dictionary[i].word))
        {
            return i;
        }
    }
    return -1;
}

void main(void)
{
    const struct dict dictinary[100]=
    {{"PC", "personal computer"},
     {"LTE", "Long Term evolution"},
     {"WCDMA", "wide CDMA"},
     {"5G", "five generation"} };

    char word[10];
    int  index=10;
    int  entry;
    int lookup(const struct dict dictionary[], const char search[], const int index);

    printf("Enter word: ");
    scanf("%14s", word);
    entry = lookup(dictinary, word, entries);

    if(entry != -1){
        printf("%s\n", dict[entry].define); 
    } else {
        printf("not found:%s.\n", word);    
    }
    return;
}
