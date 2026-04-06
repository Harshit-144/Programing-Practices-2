/* 3. Wap to copy one file int another file. */
#include <stdio.h>

int main() {
    FILE *fs, *ft;
    char ch;

    fs = fopen("source.txt", "r");
    ft = fopen("target.txt", "w");

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);
    printf("File copied successfully.");
    return 0;
}