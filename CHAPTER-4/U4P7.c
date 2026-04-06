/* 7. Wap to add records in file as per following structure. (empcode, empname, salary)
   then read the content and find out employee who earns highest salary. */
#include <stdio.h>

struct emp {
    int code;
    char name[20];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e, max;
    int n;

    fp = fopen("emp.txt", "w");
    printf("How many employees? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter Code, Name, Salary: ");
        scanf("%d %s %f", &e.code, e.name, &e.salary);
        fprintf(fp, "%d %s %f\n", e.code, e.name, e.salary);
    }
    fclose(fp);

    fp = fopen("emp.txt", "r");
    max.salary = 0;
    while (fscanf(fp, "%d %s %f", &e.code, e.name, &e.salary) != EOF) {
        if (e.salary > max.salary) max = e;
    }
    printf("Highest Salary: %s (%.2f)", max.name, max.salary);
    fclose(fp);
    return 0;
}