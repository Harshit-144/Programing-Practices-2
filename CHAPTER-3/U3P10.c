// 10. Enter 2 strings and concate them.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
