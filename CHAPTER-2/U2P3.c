// 3. Sort above data by name.
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    char dept[40];
    int year;
    float score;
};

int main() {
    struct Student s[3] = {
        {101, "Rahul", "Computer Science", 2022, 85.5},
        {102, "Anjali", "Electronics", 2021, 91.0},
        {103, "Bikram", "Mechanical", 2023, 78.2}
    };

    struct Student temp;
    int i, j, n = 3;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("%-10s %-15s %-20s %-5s %-5s\n", "RollNo", "Name", "Department", "Year", "Score");
    printf("------------------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-10d %-15s %-20s %-5d %-5.2f\n",
               s[i].rollno, s[i].name, s[i].dept, s[i].year, s[i].score);
    }

    return 0;
}
