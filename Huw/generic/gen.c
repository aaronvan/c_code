#include <stdio.h>

int main(void) {

    int stuff[] = {88, 44, 87};
    void *gp;

    // point the pointer at the array
    gp = stuff;

    // cast the pointer as an int and dereference it.
    printf("The item pointed to by gp is %d\n", *(int*)gp);
    gp += sizeof(int);
    printf("The item pointed to by gp is %d\n", *(int*)gp);
    gp += sizeof(int);
    printf("The item pointed to by gp is %d\n", *(int*)gp);

    return 0;
}
