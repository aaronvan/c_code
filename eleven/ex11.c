#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[5] = { 0 };
    char name[4] = { 'a' }

    // first print them out raw
    printf("numbers each: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4]);

    printf("name: %s\n", name);

    //set up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //set up the name
    name[0] = 'A'
    name[1] = 'a'
    name[2] = 'r'
    name[3] = 'o'
    name[4] = 'n'
