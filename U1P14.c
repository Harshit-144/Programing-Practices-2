//14. Enter a string and print it in reverse order with using string function and without string function.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int i, j, len;

    printf("Enter a string: ");
    gets(str);

    strcpy(temp, str);
    len = strlen(str);

    printf("Reverse using function: %s\n", strrev(str));

    printf("Reverse without function: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", temp[i]);
    }
    printf("\n");

    return 0;
}
