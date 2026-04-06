/* 9. Wap to read a file and find out no. of upper case letters, lower case letters, 
   special symbols, digits and vowels in the file. */
#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    char ch;
    int u=0, l=0, d=0, v=0, s=0;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') u++;
        else if (ch >= 'a' && ch <= 'z') l++;
        else if (ch >= '0' && ch <= '9') d++;
        else s++;

        char low = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (low=='a'||low=='e'||low=='i'||low=='o'||low=='u') v++;
    }
    printf("Upper: %d, Lower: %d, Digits: %d, Vowels: %d, Special: %d", u, l, d, v, s);
    fclose(fp);
    return 0;
}