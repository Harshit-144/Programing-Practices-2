// 7. Add Two Complex Numbers by Passing Structure to a Function.
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary part for 1st complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary part for 2nd complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1, num2);

    printf("\nSum = %.1f + %.1fi\n", sum.real, sum.imag);

    return 0;
}
