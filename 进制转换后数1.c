#include <stdio.h>

int main() {

    int n, r;

    while (scanf("%d %d", &n, &r) != EOF) {

        if (n == 0) {
            printf("0\n");
            return 0;
        }

        char result[1000];
        int index = 0;

        int isNegative = 0;
        if (n < 0) {
            isNegative = 1;
            n = -n;
        }

        int temp = n;
        while (temp > 0) {
            int rem = temp % r;

            if (rem < 10) {
                result[index++] = rem + '0';
            } else {
                result[index++] = rem - 10 + 'A';
            }

            temp /= r;
        }

        if (isNegative) {
            result[index++] = '-';
        }

        /*for (int i = 0; i < index / 2; i++) {
            char temp = result[i];
            result[i] = result[index - 1 - i];
            result[index - 1 - i] = temp;
        }

        //result[index] = '\0';*/

        int count1 = 0;
        for (int i = 0; i < index; i++) {
            if (result[i] == '1') {
                count1++;
            }
        }

        printf("%d\n", count1);
    }

    return 0;
}
