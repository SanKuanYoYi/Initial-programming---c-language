#include <stdio.h>
int check(int y, int m, int d);
int isOlder(int y1, int m1, int d1, int y2, int m2, int d2);

int main() {

    typedef struct {
        char name[6];
        int y;
        int m;
        int d;
    } ret;

    int n;
    scanf("%d", &n);

    ret peo[n];
    ret oldest, youngest;

    int count = 0;

    for (int i = 0; i < n; i++) {

        char birth[11];
        scanf("%s %s", peo[i].name, birth);
        sscanf(birth, "%d/%d/%d", &peo[i].y, &peo[i].m, &peo[i].d);

        if (check(peo[i].y, peo[i].m, peo[i].d)) {
            count++;

            if (count == 1) {
                oldest = peo[i];
                youngest = peo[i];
            }

            else {

                if (isOlder(peo[i].y, peo[i].m, peo[i].d,
                            oldest.y, oldest.m, oldest.d)) {
                    oldest = peo[i];
                }


                if (isOlder(youngest.y, youngest.m, youngest.d,
                            peo[i].y, peo[i].m, peo[i].d)) {
                    youngest = peo[i];
                }

            }
        }

    }

    if (count == 0) {
        printf("0\n");
    } else {
        printf("%d %s %s\n", count, oldest.name, youngest.name);
    }

    return 0;
}

int check(int y, int m, int d) {

    if (y < 1814) return 0;
    if (y == 1814 && m < 9) return 0;
    if (y == 1814 && m == 9 && d < 6) return 0;

    if (y > 2014) return 0;
    if (y == 2014 && m > 9) return 0;
    if (y == 2014 && m == 9 && d > 6) return 0;

    return 1;
}

int isOlder(int y1, int m1, int d1, int y2, int m2, int d2) {

    if (y1 < y2) return 1;
    if (y1 > y2) return 0;

    if (m1 < m2) return 1;
    if (m1 > m2) return 0;

    if (d1 < d2) return 1;

    return 0;
}
