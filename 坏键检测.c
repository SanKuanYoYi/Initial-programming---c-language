#include <stdio.h>
#include <ctype.h>

int main() {
    char str[81];
    char have[81];
    char no[81];

    scanf("%s", str);
    scanf("%s", have);

    int i = 0, j = 0, k = 0;

    while (str[i] != '\0') {
        if (have[j] == '\0' || str[i] != have[j]) {

            char upper_char = toupper(str[i]);

            int found = 0;
            for (int m = 0; m < k; m++) {
                if (no[m] == upper_char) {
                    found = 1;
                    break;
                }
            }

            if (!found) {
                no[k++] = upper_char;
            }
            i++;
        } else {

            i++;
            j++;
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%c", no[i]);
    }
    printf("\n");

    return 0;
}
