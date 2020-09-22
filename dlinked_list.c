#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 

struct listitem {
    struct listitem  *next;
    struct listitem  *prev;
    int data;
};

int main(void) {
    struct listitem *temp = NULL;
    struct listitem head;
    head.next = &head;
    head.prev = &head;
    head.data = -1;
	

    // populate the list
    for (int i = 0; i < SIZE; i++) {
		temp = malloc(sizeof(struct listitem));
		temp->data = i;
		temp->next = head.next;
		head.next = temp;
		temp->prev = &head;
		temp->next->prev = temp;
    }

    // going forward
    temp = head.next;
    while (temp != &head) {
		printf("item: current %p; next %p; prev %p; data %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->next; // move to the next item
    }

    // go backward
    temp = head.prev;
    while (temp != &head) {
		printf("item: current %p; next %p; prev %p; data %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->prev; // move to the previous item
    }

    return EXIT_SUCCESS;
}
