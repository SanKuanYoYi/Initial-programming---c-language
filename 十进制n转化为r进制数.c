#include <stdio.h>

int main() {

    int n, r;
    while (scanf("%d %d", &n, &r) != EOF) {

        char result[1000];

        int temp = n;
        int index = 0;
        while (temp > 0) {
            int rem = temp % r;

            if (rem < 10) {
                result[index++] = rem + '0';
            } else {
                result[index++] = rem - 10 + 'A';
            }

            temp /= r;
        }

        for (int i = index - 1; i >= 0; i--) {
            printf("%c", result[i]);
        }

        printf("\n");
    }

    return 0;
}
