#include <stdio.h>

int main(void) {

    int stuff[] = {88, 44, 27};
    void *gp;

    // point the pointer at the array
    gp = stuff;

    // cast the pointer as an int and dereference it.
    printf("The item pointed to by gp is %d\n", *(int*)gp);
    gp += sizeof(int);
    printf("The item pointed to by gp is %d\n", *(int*)gp);
    gp += sizeof(int);
    printf("The item pointed to by gp is %d\n", *(int*)gp);
    puts("\n");

    // again with a pointer to type int
    int *p;
    p = stuff;
    printf("The item pointed to by gp is %d\n", *p);
    p += 1; 
    printf("The item pointed to by gp is %d\n", *p);
    p += 1; 
    printf("The item pointed to by gp is %d\n", *p);



    return 0;
}
