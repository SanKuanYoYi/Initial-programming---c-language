#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum[100001] = {0};
    int max_id = 0;

    for (int i = 0; i < n; i++) {
        int id, score;
        scanf("%d %d", &id, &score);
        sum[id] += score;

        if (id > max_id) {
            max_id = id;
        }
    }

    int max_score = 0;
    int result_id = 0; 

    for (int i = 0; i <= max_id; i++) {
        if (sum[i] > max_score) {
            max_score = sum[i];
            result_id = i; 
        }
    }

    printf("%d %d", result_id, max_score);
    return 0;
}
