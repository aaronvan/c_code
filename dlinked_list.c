#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 

typedef struct listitem {
    struct listitem  *next;
    struct listitem  *prev;
    int		      data;
} LISTITEM;

int main(void) {
    LISTITEM *temp = NULL;
    LISTITEM head; // not a pointer

    head.next = (LISTITEM *) &head;
    head.prev = (LISTITEM *) &head;
    head.data = -1; // head isn't part of the list

    // populate the list
    for (int i = 0; i < SIZE; i++) {
		temp = malloc(sizeof(LISTITEM));
		temp->data = i;
		temp->next = head.next;
		head.next = temp;
		temp->prev = &head;
		temp->next->prev = temp;
    }

    // going forward
    temp = head.next;
    while (temp != &head) {
		printf("forward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->next; // move to the next item
    }

    // go backward
    temp = head.prev;
    while (temp != &head) {
		printf("backward list item: current is %p; next is %p; prev is %p; data is %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->prev; // move to the previous item
    }

    return EXIT_SUCCESS;
}
