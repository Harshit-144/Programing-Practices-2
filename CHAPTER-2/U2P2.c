// 2. Modify above program for 5 students record.
#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\n--- Entering Details for Student %d ---\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        getchar();

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0;

        printf("Department: ");
        fgets(s[i].department, sizeof(s[i].department), stdin);
        s[i].department[strcspn(s[i].department, "\n")] = 0;

        printf("Year of Joining: ");
        scanf("%d", &s[i].year_of_joining);

        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    printf("\n\n%-10s %-20s %-20s %-10s %-10s\n", "RollNo", "Name", "Department", "Year", "Score");
    printf("--------------------------------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-10d %-20s %-20s %-10d %-10.2f\n",
               s[i].rollno, s[i].name, s[i].department, s[i].year_of_joining, s[i].score);
    }

    return 0;
}
