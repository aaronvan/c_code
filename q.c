#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6 

// this is what is going to be in the queue
typedef struct listitem {
    struct listitem  *next;
    struct listitem  *prev;
    int data;
} LISTITEM;

// this is the queue 'header' 
typedef struct {
    struct listitem *first;
    struct listitem *last;
} LISTHDR;

LISTHDR head;

// this puts at item in at the queue head
void enqueue(LISTITEM *item) {
    LISTITEM *temp = NULL;

    temp = head.last;		    // get the 'last' item in the q and keep hold of it
    head.last = temp;		    // put the item in the q at the end
    item->prev = temp;		    // link back to the old 'last' item
    item->next = (LISTITEM *)&head; // set the forward link of the new item
    temp->next = item;		    // set the forward link of the old 'last' item to the new one
}

// removes item from q front - NULL if there are no more items
LISTITEM *dequeue(void) {
    LISTITEM *temp = NULL;

    temp = head.first;		      // get the 'first' item
    if (temp == (LISTITEM *)&head) {  // if the q head points to itself
       temp = NULL;		      // ...then the q is empty
    }
    else {
	head.first = temp->next;      // set q header to point to 'second' item
	head.last->prev = (LISTITEM *)&head;
    }
    return temp;
}

int main(void) {
    LISTITEM *temp = NULL;

    // first make an empty q pointing to itself
    head.first = (LISTITEM *)&head;
    head.last = (LISTITEM *)&head;

    // populate the q 
    for (int i = 0; i < SIZE; i++) {
		temp = malloc(sizeof(LISTITEM));
		temp->data = i;
		enqueue(temp);
    }

    printf("first item = %d\n", head.first->data);
    printf("last item = %d\n", head.last->data);

    do {
	temp = dequeue();
	if (temp != NULL) {
	    printf("data is %d\n", temp->data);
	    free(temp);
	}
    } while (temp != NULL);

    return EXIT_SUCCESS;
}
