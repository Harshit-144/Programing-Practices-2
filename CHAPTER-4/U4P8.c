/* 8. Wap to add records in binary file as per following structure. 
   (empcode, empname, salary) and read the content and print on screen */
#include <stdio.h>

struct emp { int code; char name[20]; float salary; };

int main() {
    FILE *fp;
    struct emp e;

    fp = fopen("emp.bin", "wb");
    printf("Enter Code, Name, Salary: ");
    scanf("%d %s %f", &e.code, e.name, &e.salary);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&e, sizeof(e), 1, fp);
    printf("Record: %d, %s, %.2f", e.code, e.name, e.salary);
    fclose(fp);
    return 0;
}