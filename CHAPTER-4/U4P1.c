/* 1. Wap to write content in file and then read that file and print the content on screen. */
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100], ch;

    fp = fopen("test.txt", "w");
    printf("Enter text to write to file: ");
    gets(text);
    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("test.txt", "r");
    printf("Content of file: ");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}