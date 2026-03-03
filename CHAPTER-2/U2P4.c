// 4. Sort above data by score in descending order.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int score;
};

int main() {

    struct Student list[] = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78},
        {"Diana", 95}
    };
    int n = 4;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (list[j].score < list[j + 1].score) {

                struct Student temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    printf("Ranking (High to Low):\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %d\n", i + 1, list[i].name, list[i].score);
    }

    return 0;
}
