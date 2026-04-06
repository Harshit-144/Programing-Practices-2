/* 10. Wap to read a file and replace all 'a' with 'x'. */
#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("input.txt", "r");
    f2 = fopen("temp.txt", "w");

    while ((ch = fgetc(f1)) != EOF) {
        if (ch == 'a') fputc('x', f2);
        else fputc(ch, f2);
    }
    fclose(f1); fclose(f2);
    return 0;
}