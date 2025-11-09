#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar(); 
    
    while (T--) {
        char opts[4][601];
        int len[4];
        
      
        for (int i = 0; i < 4; i++) {
            fgets(opts[i], 601, stdin);
       
            size_t l = strlen(opts[i]);
            if (l > 0 && opts[i][l-1] == '\n') {
                opts[i][l-1] = '\0';
                len[i] = l - 1;
            } else {
                len[i] = l;
            }
        }
        
   
        int min_len = len[0], max_len = len[0];
        for (int i = 1; i < 4; i++) {
            if (len[i] < min_len) min_len = len[i];
            if (len[i] > max_len) max_len = len[i];
        }
        
      
        int count_min = 0, count_max = 0;
        for (int i = 0; i < 4; i++) {
            if (len[i] == min_len) count_min++;
            if (len[i] == max_len) count_max++;
        }
        
        char ans;
        if (count_min == 1 && count_max != 1) {
     
            for (int i = 0; i < 4; i++) {
                if (len[i] == min_len) {
                    ans = 'A' + i;
                    break;
                }
            }
        } else if (count_max == 1 && count_min != 1) {
        
            for (int i = 0; i < 4; i++) {
                if (len[i] == max_len) {
                    ans = 'A' + i;
                    break;
                }
            }
        } else {
      
            ans = 'C';
        }
        
        printf("%c\n", ans);
    }
    
    return 0;
}
