#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    long long a, da, b, db;
    scanf("%lld %lld %lld %lld", &a, &da, &b, &db);

    char stra[20];
    int i = 0;
    long long tempa=a;
    while (tempa > 0) {
        int digit = tempa % 10;
        if (digit == da) {
            stra[i] = da + '0';
            i++;
        }
        tempa /= 10;
    }
    stra[i] = '\0';


    char strb[20];
    int j = 0;
    long long tempb=b;
    while (tempb > 0) {
        int digit = tempb % 10;
        if (digit == db) {
            strb[j] = db + '0';
            j++;
        }
        tempb /= 10;
    }
    strb[j] = '\0';


    if (i == 0) strcpy(stra, "0");
    if (j == 0) strcpy(strb, "0");

    int aa = atoi(stra);
    int bb = atoi(strb);

    printf("%d", aa + bb);

    return 0;
}


