// 12. Enter a string and print it in lowercase letters.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String in lowercase: ");
    while(str[i] != '\0') {
        putchar(tolower(str[i]));
        i++;
    }

    return 0;
}
