//15. Enter a string and find out how many spaces and vowels in the string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, spaces = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }


        else if (str[i] == ' ') {
            spaces++;
        }

        i++;
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Spaces: %d\n", spaces);

    return 0;
}
