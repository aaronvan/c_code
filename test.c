#include <stdio.h>

int main(void) {
    static int a = 5;
    if (--a) {
	main();
	printf("%d\n", a);
    }
    return 0;
}
