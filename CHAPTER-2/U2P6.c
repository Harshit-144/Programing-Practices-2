// 6. Write a function to print data of all students who joined in 2019.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int year;
};

int main() {

    struct Student s[4] = {
        {"Mark", 1, 2019},
        {"Sara", 2, 2020},
        {"John", 3, 2019},
        {"Emma", 4, 2018}
    };

    printf("Students from 2019:\n");

    for (int i = 0; i < 4; i++) {
        if (s[i].year == 2019) {
            printf("- %s (Roll: %d)\n", s[i].name, s[i].roll);
        }
    }

    return 0;
}
