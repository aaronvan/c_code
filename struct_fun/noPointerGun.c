#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct Gun {
    char *name;
    int calibre;
    int range;
} gun_t;

gun_t gunMake(char *name, int calibre, int range) {
    gun_t gun;

    gun.name = name;
    gun.calibre = calibre;
    gun.range = range;

    return gun;
}

void gunPrint(gun_t gun) {
    printf("Model: %s\n", gun.name);
    printf("Calibre: %d\n", gun.calibre);
    printf("Range: %d\n", gun.range);
}

int main(void) {
    gun_t paladin = gunMake("Super Paladin", 155, 25000);
    gunPrint(paladin);

    return 0;
}


