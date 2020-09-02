#include <stdio.h>

#define LENGTH 3

char *words[LENGTH];

int main(int argc, char *argv[]) {
    char *pc;
    char **ppc;

    //initilize string array
    words[0] = "Freakwater";
    words[1] = "Stupendous";
    words[2] = "Simplicissimuss";

    for (int i = 0; i < LENGTH; i++) {
	printf("%s\n", words[i]);
    }

    puts("Now print each char of each string:\n");

    ppc = words; //point the pointer to the address of words which is also it's name

    for (int i = 0; i < LENGTH; i++) {
	ppc = words + i;
	pc = *ppc;
	while (*pc != 0) {
	    printf("%c ", *pc);
	    pc += 1;
	}
	puts("\n");
    }

    return 0;
}
