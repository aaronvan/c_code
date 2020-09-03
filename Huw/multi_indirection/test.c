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

    ppc = words; //pointer to the pointer to the address of words; also it's name

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

// words[] = { 
//				{'F','r', 'e', 'a', 'k', 'w', 'a', 't', 'e', 'r', '\0'},
//				{'S', 't', 'u', 'p', 'e', 'n', 'd', 'o', 'u', 's', '\0'},
//				{'S', 'i', 'm', 'p', 'l', 'i', 'c', 'i', 's', 's', 'i', 'm', 'u', 's', 's', '\0'}
//		   	 }