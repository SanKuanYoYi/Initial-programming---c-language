#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void* a, const void* b);
int compare_desc(const void* a, const void* b);
void extract_digits(int num, int digits[]);

int main() {
    int num;
    scanf("%d", &num);
    
    int dif = 0;
    
    do {
        int digits[4];
        extract_digits(num, digits);
 
        int asc_digits[4];
        for (int i = 0; i < 4; i++) {
            asc_digits[i] = digits[i];
        }
        qsort(asc_digits, 4, sizeof(int), compare_asc);
 
        int desc_digits[4];
        for (int i = 0; i < 4; i++) {
            desc_digits[i] = digits[i];
        }
        qsort(desc_digits, 4, sizeof(int), compare_desc);
        
        int asc_num = 0;
        int desc_num = 0;
        
        for (int i = 0; i < 4; i++) {
            asc_num = asc_num * 10 + asc_digits[i];
            desc_num = desc_num * 10 + desc_digits[i];
        }
        
        dif = desc_num - asc_num;
        printf("%04d - %04d = %04d\n", desc_num, asc_num, dif);
        
        num = dif; 
        
    } while (dif != 6174 && dif != 0);
    
    return 0;
}

int compare_asc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int compare_desc(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}

void extract_digits(int num, int digits[]) {
    for (int i = 3; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }
}
