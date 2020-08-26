#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("This date is: %s and was compiled at: %s\n", __DATE__, __TIME__);
    printf("This file is: %s\n", __FILE__);
    printf("Now show is the STDC: %d\n", __STDC__);
    return EXIT_SUCCESS;
}
