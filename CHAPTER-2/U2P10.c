// 10. Write a program to demonstrate nested structure.
#include <stdio.h>

struct Address {
    int houseNo;
    char city[20];
};

struct Student {
    char name[50];
    int roll;
    struct Address addr;
};

int main() {
    struct Student s1;

    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter House Number and City: ");
    scanf("%d %s", &s1.addr.houseNo, s1.addr.city);

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Address: House No %d, City: %s\n", s1.addr.houseNo, s1.addr.city);

    return 0;
}
