#include <stdio.h>
#include <string.h>

int main() {

    char have[1000];
    char expected[1000];

    scanf("%s", have);
    scanf("%s", expected);

    int have_len = strlen(have);
    int expected_len = strlen(expected);

    int flag[1000] = {0};
    int count = 0;

    for (int i = 0; i < expected_len; i++) {
        for (int j = 0; j < have_len; j++) {

            if (expected[i] == have[j] && !flag[j]) {
                count++;
                flag[j] = 1;
                break;
            }
        }
    }

    if (count == expected_len) {

        int extra = 0;
        for (int i = 0; i < have_len; i++) {
            if (!flag[i]) {
                extra++;
            }
        }
        printf("Yes %d", extra);
    } else {
        printf("No %d", expected_len - count);
    }

    return 0;
}
