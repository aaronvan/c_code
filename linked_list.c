#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct listitem {
    struct listitem *next;
    int data;
} LISTITEM;

int main(void) {
    LISTITEM *listhead = NULL;
    LISTITEM *temp = NULL;

    // populate the list
    for (int i = 0; i < SIZE; i++) {
	temp = malloc(sizeof(LISTITEM));
	temp->data = i;
	temp->next = listhead;
	listhead = temp;
    }

    // let's see what we have
    temp = listhead;
    while (temp != NULL) {
	printf("list item: current is %p; next is %p; data is %d\n", temp, temp->next, temp->data);
	temp = temp->next;
    }

    return EXIT_SUCCESS;
}


