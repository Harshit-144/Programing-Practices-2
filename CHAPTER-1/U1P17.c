//17. Check the string is palindrome or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, is_palindrome = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is NOT a palindrome.\n", str);
    }

    return 0;
}
