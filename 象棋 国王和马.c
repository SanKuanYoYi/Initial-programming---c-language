#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    int house[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, 
                      {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

    int king[8][2] = {{1, 0}, {1, 1}, {1, -1}, {0, 1}, 
                     {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};

    while (T--) {
        long long x, y, n;
        scanf("%lld %lld %lld", &x, &y, &n);
        
        long long xi, yi;
        int flag = 0;
        int covered[8] = {0}; 
        
        for (long long i = 0; i < n; i++) {
            scanf("%lld %lld", &xi, &yi);

            for (int j = 0; j < 8; j++) {
                if (xi + house[j][0] == x && yi + house[j][1] == y) {
                    flag = 1;
                    break;
                }
            }

            for (int j = 0; j < 8; j++) {
                long long kingx = x + king[j][0];
                long long kingy = y + king[j][1];
      
                for (int k = 0; k < 8; k++) {
                    if (xi + house[k][0] == kingx && yi + house[k][1] == kingy) {
                        covered[j] = 1; 
                        break;
                    }
                }
            }
        }

        int cango = 0;
        for (int i = 0; i < 8; i++) {
            if (covered[i] == 1) {
                cango++;
            }
        }

        if (flag && cango >= 8) {
            printf("B\n");
        } else if (!flag && cango >= 8) {
            printf("A\n");
        } else {
            printf("C\n");
        }
    }
    
    return 0;
}
