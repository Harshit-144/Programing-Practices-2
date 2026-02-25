// 13. Enter a string and find out length of string with using string function and without string function.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Length using function: %d\n", strlen(str));

    while (str[i] != '\0') {
        i++;
    }
    printf("Length without function: %d\n", i);

    return 0;
}
