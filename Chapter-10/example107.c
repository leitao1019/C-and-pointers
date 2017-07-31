#include <stdio.h>

void main(void)
{
    struct entry
    {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1;
    
    n1.value = 1;
    n1.next  = &n2;

    n2.value = 2;
    n2.next  = &n3;

    n3.value = 3;
    n3.next  = (struct entry *) 0;

    while(list_pointer != (struct entry *) 0)
    {
        printf("%d \n", list_pointer->value); 
        list_pointer = list_pointer->next;
    }

    return;
}
