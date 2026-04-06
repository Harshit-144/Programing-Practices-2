/* 11. Wap to find the size of file without traversing character by character. */
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    fseek(fp, 0, SEEK_END);
    printf("Size of file: %ld bytes", ftell(fp));
    fclose(fp);
    return 0;
}