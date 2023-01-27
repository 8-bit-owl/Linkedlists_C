#include <stdio.h>
#include <stdlib.h>
/*
The whole idea of linkedlist is to have a pointer to the next node.
This is a very simple implementation of linkedlist. 

BUT WHY CARE !? :/

Ever thought how spotify or apple music works? One of the data structure used is linkedlist.

The next, shuffle, and playlists are all stored in linkedlist. Infact, I couldnt think of 
any better data structure. Ofcourse, you could argue that graphs are better. But, graphs, trees 
are all essentially linkedlists. Its imprtant to understand linkedlist on a memory level, and 
use it in our projects when ever requreid. 

This could be a part of system design interview.
*/




*/
struct Node
{
    int a;
    struct Node *next;
};
int main()
{ 
    /**
    Here we create 2 objects to iterate through a linkedlist.
    We use pointer to iterate over linkedlist. Not the data itself. 
    Inorder to go to a particular location, we need to have that location first
    That is why, we use malloc. malloc is not encouraged in embedded systems in general.
    This is just to demonstrate linkedlist. 

    
    */

    struct Node *ptr;
    struct Node obj;
    ptr = &obj;
    for(int i = 0;i<9;i++)
    {
        // create a new memory and point the current's next to the new memory
        ptr->next = (struct Node*)malloc(sizeof(struct Node));
        ptr->a = i;
        // update the current pointer to the curr->next, so next time it will update
        // the next data in the linkedlist.
        ptr=ptr->next; 

    }

    ptr->a = 9;
    struct Node *head = &obj;
    // until head == 0, loop throgh it. and once its zero, it comes out.
    while(head!=0)
    {
        printf("%d \n",*(head));
        head = head->next;
    }
    
    return 0;
}