#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int score[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    int checkn;
    scanf("%d", &checkn);

    int score_count[checkn];
    for (int i = 0; i < checkn; i++) {
        score_count[i] = 0;
    }

    int check;
    for (int i = 0; i < checkn; i++) {
        scanf("%d", &check);

        for (int j = 0; j < n; j++) {
            if (score[j] == check) {
                score_count[i]++;
            }
        }
    }

    for (int i = 0; i < checkn; i++) {
        printf("%d ", score_count[i]);
    }

    return 0;
}
