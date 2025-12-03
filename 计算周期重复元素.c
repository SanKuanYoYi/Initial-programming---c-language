#include<stdio.h>
int main() {

    long long l, r;
    scanf("%lld %lld", &l, &r);

    long long flagl = 0, flagm = 0, flagr = 0;
    if(l % 3 == 0) {
        flagr = 1;
    }
    if(l % 3 == 1) {
        flagl = 1;
    }
    if(l % 3 == 2) {
        flagm = 1;
    }

    long long acount = 0, bcount = 0, ccount = 0;

    long long temp = (r - l + 1) / 3;
    long long rem = (r - l + 1) % 3;
    
    acount+=temp;
    bcount+=temp;
    ccount+=temp;

    if (rem >= 1) {
        if (flagl) acount++;
        if (flagm) bcount++;
        if (flagr) ccount++;
    }

    if (rem >= 2) {
        int next_pos = (l % 3) + 1;
        if (next_pos == 1) acount++;
        else if (next_pos == 2) bcount++;
        else ccount++;
    }

    printf("%lld %lld %lld\n", acount, bcount, ccount);

    return 0;
}
