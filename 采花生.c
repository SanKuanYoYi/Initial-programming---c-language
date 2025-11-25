#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int m, n, k;
    while (scanf("%d %d %d", &m, &n, &k) != EOF) {

        int field[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &field[i][j]);
            }
        }

        int time = 0;
        int sum = 0;
        int cur_i = -1, cur_j = -1;

        while (time < k) {

            int max_i = 0, max_j = 0;
            int max_peanuts = 0;

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {

                    if (field[i][j] > max_peanuts) {
                        max_peanuts = field[i][j];
                        max_i = i;
                        max_j = j;
                    }
                }
            }

            if (max_peanuts == 0) break;

            int move_time;

            if (cur_i == -1) {
                move_time = max_i + 1;

            } else {
                move_time = abs(cur_i - max_i) + abs(cur_j - max_j);
            }

            int pick_time = 1;
            int return_time = 1 ;

            if (time + move_time + pick_time + return_time <= k) {

                time += move_time + pick_time;
                sum += max_peanuts;
                cur_i = max_i;
                cur_j = max_j;
                field[max_i][max_j] = 0;
            } else {
                break;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
