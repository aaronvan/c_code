#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 

struct listitem {
    struct listitem  *next;
    struct listitem  *prev;
    int data;
};

// anchor point to "manage" the list
struct base {
    struct listitem *first;
    struct listitem *last;
};

int main(void) {
    struct listitem *temp = NULL;
    struct base head;
    head.first = (struct listitem *)&head;
    head.last = (struct listitem *)&head;

    // populate the list
    for (int i = 0; i < SIZE; i++) {
		temp = malloc(sizeof(struct listitem));
		temp->data = i;
		temp->next = head.first;
		head.first = temp;
		temp->prev = (struct listitem *)&head;
		temp->next->prev = temp;
    }

    // going forward
    temp = head.first;
    while (temp != (struct listitem *)&head) {
		printf("current: %p; next: %p; prev: %p; data: %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->next; // move to the next item
    }

    // go backward
    temp = head.last;
    while (temp != (struct listitem *)&head) {
		printf("current: %p; next: %p; prev: %p; data: %d\n", temp, temp->next, temp->prev, temp->data);
		temp = temp->prev; // move to the previous item
    }

    return EXIT_SUCCESS;
}
