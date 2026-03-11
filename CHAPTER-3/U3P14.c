//14. Compare two strings and find out strings are same or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if(strcmp(str1, str2) == 0) {
        printf("Strings are the same.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
