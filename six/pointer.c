#include <stdio.h>

int main(int argc, char *argv[]) {

    int num = 100;
    int *p = NULL;

    p = &num;

    printf("The values of num is: %d\n", num);
    printf("Pointer p points to (address of num): %p\n", &num);
    printf("The dereferenced pointer is: %d\n", *p);

    return 0;
}
