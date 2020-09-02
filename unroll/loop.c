#include <stdio.h>

int main(void) {

    puts("First a normal loop:");
    printf("\n");
    int x;
    for (x = 0; x < 100; x++) {
	printf("%d ", x);
    }
    printf("\n\n");

    puts("Now unroll the loop:");
    printf("\n");

    int y;
    for (y = 0; y < 100; y += 5) {
	printf("%d ", y);
	printf("%d ", y + 1);
	printf("%d ", y + 2);
	printf("%d ", y + 3);
	printf("%d ", y + 4);
    }

    printf("\n");

    return 0;
}
