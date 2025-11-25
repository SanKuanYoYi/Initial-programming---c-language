#include <stdio.h>

int main() {
    int pg, ps, pk, ag, as, ak;
    scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);

    int totalp = pg * 17 * 29 + ps * 29 + pk;
    int totala = ag * 17 * 29 + as * 29 + ak;

    int dif = totala - totalp;

    int negative = 0;
    if (dif < 0) {
        negative = 1;
        dif = -dif;
    }

    int g = dif / 17 / 29;
    int remainder = dif % (17 * 29);
    int s = remainder / 29;
    int k = remainder % 29;

    if (negative) {
        printf("-%d.%d.%d", g, s, k);
    } else {
        printf("%d.%d.%d", g, s, k);
    }

    return 0;
}
