#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    for (i = 0; i < argc; i++) {
	printf("arg %d is %s\n", i, *argv);
	argv += 1;
    }

    return 0;
}

// argv[] = {'./arg', 'one', 'two', 'three'}

// argv[] = { 
				{'.', '/', 'a', 'r', 'g', '\0'},
				{'o', 'n', 'e', '\0'},
				{'t', 'w', 'o', '\0'},
				{'t', 'h', 'r', 'e', 'e', '\0'}
			}
