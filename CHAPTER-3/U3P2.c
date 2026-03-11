//2. find out area of circle using pointer and function
#include <stdio.h>

void areaOfCircle(float *r) {
    float area;
    area = 3.14 * (*r) * (*r);
    printf("Area of circle = %.2f\n", area);
}

int main() {
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    areaOfCircle(&radius);
    return 0;
}
