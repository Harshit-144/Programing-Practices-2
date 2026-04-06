/* 2. Wap to read a file and count no. of characters, blank spaces, tabs and lines in file */
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int c = 0, s = 0, t = 0, l = 0;

    fp = fopen("test.txt", "r");
    while ((ch = fgetc(fp)) != EOF) {
        c++;
        if (ch == ' ') s++;
        if (ch == '\t') t++;
        if (ch == '\n') l++;
    }
    printf("Chars: %d, Spaces: %d, Tabs: %d, Lines: %d", c, s, t, l + 1);
    fclose(fp);
    return 0;
}