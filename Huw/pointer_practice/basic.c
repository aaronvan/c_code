#include <stdio.h>

int main(void) {
    int num;
    int* numPtr = NULL;
    int num2;

    num = 100;
    numPtr = &num;
    num2 = *numPtr;

    printf("1. num = %d\n", num);
    printf("2. numPtr contains the address of num = %p\n", numPtr);
    printf("3. address of num: %p\n", &num);
    printf("4. num2 is dereferenced *numPtr: %d\n", num2);

    return 0;
}
