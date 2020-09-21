#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
	puts("Needs an argument.");
	return EXIT_FAILURE;
    }
    int b = atoi(argv[1]);

    printf("echo: %d\n", b);

    return EXIT_SUCCESS;
}


