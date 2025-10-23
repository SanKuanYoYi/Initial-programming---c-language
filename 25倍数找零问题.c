#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count25 = 0, count50 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 25) {
            count25++;
        } else if (arr[i] == 50) {
            if (count25 >= 1) {
                count25--;
                count50++;
            } else {
                printf("NO\n");
                return 0;
            }
        } else if (arr[i] == 100) {
            if (count50 >= 1 && count25 >= 1) {
                count50--;
                count25--;
            } else if (count25 >= 3) {
                count25 -= 3;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
