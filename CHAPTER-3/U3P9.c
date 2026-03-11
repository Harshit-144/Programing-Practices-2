// #include <stdio.h>
#include <string.h>

int main() {
    char str[5][50], temp[50];
    int i, j;

    printf("Enter 5 strings:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }


    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nStrings in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
