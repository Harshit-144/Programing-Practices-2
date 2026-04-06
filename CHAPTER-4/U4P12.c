/* 12. Wap to enter a number in one file and print its reverse in another file. */
#include <stdio.h>

int main() {
    FILE *f1, *f2;
    int num, rev = 0;

    f1 = fopen("num.txt", "w");
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(f1, "%d", num);
    fclose(f1);

    f1 = fopen("num.txt", "r");
    fscanf(f1, "%d", &num);
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    f2 = fopen("rev.txt", "w");
    fprintf(f2, "%d", rev);
    fclose(f1); fclose(f2);
    return 0;
}