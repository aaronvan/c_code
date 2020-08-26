#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.345f;
    double super_power = 56542.2545;
    char initial = 'J';
    char first_name[] = "Aaron";
    char last_name[] = "VanAlstine";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("I have a middle initial %c.\n", initial);
    printf("%s is my first name.\n", first_name);
    printf("My last name is %s.\n", last_name);

    printf("%d\n", initial);

    return 0;
}


