#include <stdio.h>

int main(void) {
    int num;
    int* numPtr = NULL;
    int num2;

    num = 100;
    numPtr = &num;
    num2 = *numPtr;

    printf("num = %d, numPtr = %p, address of num: %p, num2 = %d\n", num, numPtr, &num, num2);

    char *names[] = {"aaron", "deede"};
    int count = sizeof(names)/sizeof(char);
    printf("%d\n", count);

    return 0;
}
