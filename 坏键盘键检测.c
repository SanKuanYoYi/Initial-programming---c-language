#include <stdio.h>

int main() {

    char broken[100002];
    char expected[100002];
    char actual[100002];

    scanf("%s", &broken);
    scanf("%s", &expected);

    int wrongCap = 0;
    for (int i = 0; broken[i] != '\0' && !wrongCap; i++) {
        if (broken[i] == '+') {
            wrongCap = 1;
            break;
        }
    }

    int k = 0;
    for (int i = 0; expected[i] != '\0'; i++) {
        int isbroken = 0;

        for (int j = 0; broken[j] != '\0'; j++) {

            if (isalpha(expected[i])) {
                if (toupper(expected[i]) == broken[j]) {
                    isbroken = 1;
                    break;
                }
            }

            else if (expected[i] == broken[j]) {
                isbroken = 1;
                break;
            }
        }

        /////////////////////////////////

        if (wrongCap && isupper(expected[i])) {
            isbroken = 1;
        }

        //////////////////////////////////
        if (!isbroken) {
            actual[k] = expected[i];
            k++;
        }

    }


    printf("%s", actual);


    return 0;
}
