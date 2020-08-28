#include <stdio.h>

#include "test.h"

/* this is the main function */

int main(int argc, char *argv[]) {
    int a = 8;
    int b = 3;
    int c = add(a, b);
    printf("%d\n", c);

    int c = square(a);
    printf("%d\n", c);

    return 0;
}
