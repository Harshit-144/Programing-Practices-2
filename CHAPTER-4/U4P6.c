/* 6. Wap to write a file DATA.Txt which has 1 to 10 numbers and then read this file. 
   If number is odd then store it in "ODD.txt" and if it is even store it in "EVEN.txt" */
#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    int n;

    f1 = fopen("DATA.txt", "w");
    for (int i = 1; i <= 10; i++) fprintf(f1, "%d ", i);
    fclose(f1);

    f1 = fopen("DATA.txt", "r");
    f2 = fopen("ODD.txt", "w");
    f3 = fopen("EVEN.txt", "w");

    while (fscanf(f1, "%d", &n) != EOF) {
        if (n % 2 == 0) fprintf(f3, "%d ", n);
        else fprintf(f2, "%d ", n);
    }
    fclose(f1); fclose(f2); fclose(f3);
    return 0;
}