#include <stdio.h>
#include <errno.h>

int main(void) {
    FILE *fp = fopen("number.txt", "r");
    if (!fp) {
	perror("File open failed");
	return -1;
    }

    fclose(fp);

    return 0;
}
