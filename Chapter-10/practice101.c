#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(int *list, int *next)
{
        
}

void main(void)
{
    struct entry n1, n2, n3;

    n1.value=100;
    n1.next=&n2;

    n2.value=200;
    n2.next=&n3;

    n3.value=300;
    n3.next=(struct entry *) 0;

}
