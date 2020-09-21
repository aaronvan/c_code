#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Gun {
    char *name;
    int calibre;
    int range;
};

struct Gun gunMake(char *name, int calibre, int range) {
    struct Gun gun;

    gun.name = name;
    gun.calibre = calibre;
    gun.range = range;

    return gun;
}

void gunPrint(struct Gun gun) {
    printf("Model: %s\n", gun.name);
    printf("Calibre: %d\n", gun.calibre);
    printf("Range: %d\n", gun.range);
}

int main(void) {
    struct Gun paladin = gunMake("Super Paladin", 155, 25000);
    gunPrint(paladin);

    return 0;
}


