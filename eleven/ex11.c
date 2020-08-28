#include <stdio.h>

int main(int argc, char *argv[]) {
    int number[4] = {0};
    char name[5] = {'a'};

    // first print raw arrays
    printf("1. numbers each: %d%d%d%d\n", number[0], number[1], number[2], number[3]);
    printf("2. name each: %c%c%c%c%c\n", name[0], name[1], name[2], name[3], name[4]);

    printf("3. name: %s\n", name);

    //set up the numbers
    number[0] = 1;
    number[1] = 2;
    number[2] = 3;
    number[3] = 4;

    //set up the name
    name[0] = 'A';
    name[1] = 'a';
    name[2] = 'r';
    name[3] = 'o';
    name[4] = 'n';

    // print them out initialized
    printf("4. numbers: %d%d%d%d\n", number[0], number[1], number[2], number[3]);

    printf("5. name each %c%c%c%c%c\n", name[0], name[1], name[2], name[3], name[4]);

    //print the name like a string
    printf("6. print the name like string: %s\n", name);

    //another way to use name
    char *me = "Aaron";
    printf("7. another: %s\n", me);
    printf("8. another each: %c %c %c %c %c\n", me[0], me[1], me[2], me[3], me[4]);

    return 0;
}
