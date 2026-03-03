// 5. Write a function to print names of students whose grade is greater than 5.0.
#include <stdio.h>

struct Student {
    char name[20];
    float grade;
};

void printTopStudents(struct Student list[], int n) {
    printf("Students with a grade greater than 5.0:\n");
    int found = 0;

    for (int i = 0; i < n; i++) {

        if (list[i].grade > 5.0) {
            printf("- %s (Grade: %.1f)\n", list[i].name, list[i].grade);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with a grade above 5.0.\n");
    }
}

int main() {
    struct Student classList[] = {
        {"Alice", 8.5},
        {"Bob", 4.2},
        {"Charlie", 5.0},
        {"Diana", 9.1},
        {"Ethan", 2.3}
    };
    int n = 5;

    printTopStudents(classList, n);

    return 0;
}
