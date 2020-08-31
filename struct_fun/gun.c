#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Gun {
    char *name;
    int calibre;
    int range;
} gun_t;

gun_t *gun_make(char *name, int calibre, int range) {
    gun_t *gun = malloc(sizeof(gun_t));
    assert(gun != NULL);

    gun->name = name;
    gun->calibre = calibre;
    gun->range = range;

    return gun;
}

void gunPrint(gun_t *gun) {
    printf("Model: %s\n", gun->name);
    printf("Calibre: %d\n", gun->calibre);
    printf("Range: %d\n", gun->range);
}

int main(void) {
    gun_t *paladin = gun_make("M112", 155, 25000);
    gunPrint(paladin);

    return 0;
}


