#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

struct listitem {
    struct listitem *next;
    int data;
};

int main(void) {
    struct listitem *listhead = NULL;
    struct listitem *temp = NULL;

    // populate the list
    for (int i = 0; i < SIZE; i++) {
	temp = malloc(sizeof(struct listitem));
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


