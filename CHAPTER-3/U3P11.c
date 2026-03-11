// 11. Enter a string and print it in uppercase letters.
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String in uppercase: ");
    while(str[i] != '\0') {
        putchar(toupper(str[i]));
        i++;
    }

    return 0;
}
