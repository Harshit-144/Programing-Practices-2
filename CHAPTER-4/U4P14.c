/* 14. Wap to copy one file into another using command line arguments. */
#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fs, *ft;
    char ch;
    if (argc != 3) return 1;

    fs = fopen(argv[1], "r");
    ft = fopen(argv[2], "w");

    while ((ch = fgetc(fs)) != EOF) fputc(ch, ft);

    fclose(fs); fclose(ft);
    return 0;
}