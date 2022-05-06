#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*MY VERSION OF THIS LISTING*/

struct data{
    char name[20];
    struct data *next;
};

typedef struct data PERSON;
typedef PERSON *LINK;

// gcc -Wall -ggdb listing_14_13.c -o listing_14_13
int main(void)
{
    LINK head = NULL;
    LINK new = NULL;
    LINK current = NULL;

    // A.- create head elemnt
    head = (LINK) malloc(sizeof(PERSON));
    head->next = NULL;
    strcpy(head->name,"Angel Cool");

    // B.- create a new element
    new = (LINK) malloc(sizeof(PERSON));
    new->next = NULL;
    strcpy(new->name,"Esteban Gongora");

    // B.1.- find last elemnt
    current = head;
    while(current->next != NULL)
    {
        current=current->next;
    }

    // B.2.- add new element at the end of the list.
    current->next=new;

    // C.- create another new element
    new = (LINK) malloc(sizeof(PERSON));
    strcpy(new->name,"Charlie Brown");

    // C.1.- add this other new element at the second position in the list.
    new->next = head->next;
    head->next= new;

    // D.- print out all data items in order
    current = head;
    while(current != NULL)
    {
        printf("Element memory address: %p in hex or %lu in decimal. Variable name: %s\n", (void *) current, (unsigned long) current,current->name);

        current= current->next;
    }

    return 0;
}