#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 1;
    while (i <= 550) {
	printf("%d ", i);
	i++;
    }
    printf("\n");
    return EXIT_SUCCESS;
}
