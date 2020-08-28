#include <stdio.h>

#include "test.h"

int main(int argc, char *argv[]) {
    int a = 8;
    int b = 3;
    int c = add(a, b);
    printf("%d\n", c);

    return 0;
}
