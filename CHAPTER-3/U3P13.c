// 13. Enter a string and print it in reverse order
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if(str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
