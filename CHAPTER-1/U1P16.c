//16. Compare two strings and find out they are same or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i = 0, same = 1;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0) {
        printf("Using strcmp: The strings are the same.\n");
    } else {
        printf("Using strcmp: The strings are NOT the same.\n");
    }

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            same = 0;
            break;
        }
        i++;
    }

    if (same == 1) {
        printf("Manual Check: The strings are the same.\n");
    } else {
        printf("Manual Check: The strings are NOT the same.\n");
    }

    return 0;
}
