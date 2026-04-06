/* 10. Write a program to sort 5 strings in descending order. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20], temp[20];
    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++) scanf("%s", s[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) < 0) { // Descending
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("Sorted strings (Descending):\n");
    for (int i = 0; i < 5; i++) printf("%s\n", s[i]);
    return 0;
}