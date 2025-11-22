#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char code[n][19];
    char temp[n][19]; 
    int invalid_count = 0; 
    
    int weights[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

    for (int i = 0; i < n; i++) {
        scanf("%s", code[i]);
    }

    for (int i = 0; i < n; i++) {
        int valid = 1;

        for (int j = 0; j < 17; j++) {
            if (!(code[i][j] >= '0' && code[i][j] <= '9')) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            int sum = 0;

            for (int k = 0; k < 17; k++) {
                sum += (code[i][k] - '0') * weights[k];
            }

            int z = sum % 11;

            if (m[z] != code[i][17]) {
                valid = 0;
            }
        }

        if (!valid) {
            strcpy(temp[invalid_count], code[i]);
            invalid_count++;
        }
    }

    if (invalid_count == 0) {
        printf("All passed");
    } else {
        for (int i = 0; i < invalid_count; i++) {
            printf("%s\n", temp[i]);
        }
    }
    
    return 0;
}
