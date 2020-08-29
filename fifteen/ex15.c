#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int ages[] = {56, 58, 85, 84, 57};
    char *names[] = {
	"Aaron", "Eric",
	"Jack", "Marge", "Lisa"};

    // get the size of ages
    int count = sizeof(ages)/sizeof(int);
    int i = 0;

    // first way of indexing
    for (i = 0; i < count; i++) {
	printf("%s is %d years old.\n", names[i], ages[i]);
    }

    printf("---\n");

    // set up the pointers so the begining of the arrays
    int *cur_age = ages;
    char **cur_name = names;

    // another way to use pointers
    for (i = 0; i < count; i++) {
	printf("%s around %d years old.\n", *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");

    // pointers are not array! But they can act like them
    for (i = 0; i < count; i++) {
	printf("%s really about %d years old.\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");

    // the ridiculous complex way
    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
	printf("The age of %s is the age %d.\n", *cur_name, *cur_age);
    }

    return EXIT_SUCCESS;
}




