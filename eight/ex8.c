#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
	printf("You didn't have any arguments.\n");
    } else {
      printf("Here are your arguments:\n");
	    for (int i = 0; i < argc; i++) {
		printf("%s ", argv[i]);
	    }
	    printf("\n");
	}

    
    return EXIT_SUCCESS;
}
