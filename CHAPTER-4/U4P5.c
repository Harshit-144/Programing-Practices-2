/* 5. Wap to write string in "greencity.txt" and print it in reverse order in file "cleancity.txt" */
#include <stdio.h>
#include <string.h>

int main() {
    FILE *f1, *f2;
    char str[100];

    f1 = fopen("greencity.txt", "w");
    printf("Enter a string: ");
    gets(str);
    fprintf(f1, "%s", str);
    fclose(f1);

    f2 = fopen("cleancity.txt", "w");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        fputc(str[i], f2);
    }
    fclose(f2);
    return 0;
}