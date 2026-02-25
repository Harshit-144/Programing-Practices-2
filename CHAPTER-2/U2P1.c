// 1.Write a program to input data and display data.
#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s;

    printf("--- Enter Student Details ---\n");

    printf("Roll No: ");
    scanf("%d", &s.rollno);

    getchar();

    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Department: ");
    fgets(s.department, sizeof(s.department), stdin);

    printf("Year of Joining: ");
    scanf("%d", &s.year_of_joining);

    printf("Score: ");
    scanf("%f", &s.score);

    printf("\n--- Student Record ---\n");
    printf("Roll Number     : %d\n", s.rollno);
    printf("Name            : %s", s.name);
    printf("Department      : %s", s.department);
    printf("Joining Year    : %d\n", s.year_of_joining);
    printf("Score           : %.2f\n", s.score);

    return 0;
}
