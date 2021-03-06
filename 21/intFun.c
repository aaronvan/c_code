#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

    const int x = 88;
    printf("%d is a constant.\n", x);
    // error: x += 1;

    /* exact data types */
    int8_t a = -1;
    uint8_t b = 1;
    int16_t c = -2222;
    uint16_t d = 2222;
    int32_t e = -33333333;
    uint32_t f = 33333333;
    int64_t g = -444444444;
    uint64_t h = 444444444;
    printf("%d, %d\n %d, %d\n %d, %d\n %d, %d\n", a, b, c, d, e, f, g, h);
    printf("%x, %x\n %x, %x\n %x, %x\n %x, %x\n", a, b, c, d, e, f, g, h);

    /* enum example */
    enum chuck { Sunday, Monday, Tuesday, Wednesday,
	Thursday, Friday, Saturday };

    enum chuck day;
    day = Wednesday;

    printf("enum returns: %d\n", day);

    return EXIT_SUCCESS;
}
