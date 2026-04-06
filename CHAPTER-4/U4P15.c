/* 15. Wap which demonstrate fseek(), ftell() and rewind() functions. */
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");
    fputs("Hello World", fp);

    printf("Current Position: %ld\n", ftell(fp));
    
    fseek(fp, 6, SEEK_SET); // Move to 6th char
    printf("After fseek, Position: %ld\n", ftell(fp));

    rewind(fp); // Go back to start
    printf("After rewind, Position: %ld\n", ftell(fp));

    fclose(fp);
    return 0;
}