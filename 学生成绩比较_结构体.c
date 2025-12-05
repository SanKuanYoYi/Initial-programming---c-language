#include <stdio.h>
#include <string.h>

typedef struct {
    char name[10];
    int c1;
    int c2;
    int c3;
} Student;

int main() {
    int N;
    scanf("%d", &N);

    Student students[N];

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d",
              students[i].name,
              &students[i].c1,
              &students[i].c2,
              &students[i].c3);
    }

    int maxIndex = 0;
    int max = students[0].c1 + students[0].c2 + students[0].c3;

    for (int i = 1; i < N; i++) {
        int currentTotal = students[i].c1 + students[i].c2 + students[i].c3;

        if (currentTotal > max) {

            max = currentTotal;
            maxIndex = i;
        } else if (currentTotal == max) {

            if (strcmp(students[i].name, students[maxIndex].name) < 0) {
                maxIndex = i;
            }
        }
    }

    printf("%s %d %d %d\n",
           students[maxIndex].name,
           students[maxIndex].c1,
           students[maxIndex].c2,
           students[maxIndex].c3);

    return 0;
}
