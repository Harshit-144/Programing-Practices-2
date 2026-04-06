/* 4. Wap to append the content in given file. */
#include <stdio.h>

int main() {
    FILE *fp;
    char text[50];

    fp = fopen("test.txt", "a"); // 'a' mode for append
    printf("Enter text to append: ");
    gets(text);
    fprintf(fp, "%s", text);
    fclose(fp);
    return 0;
}