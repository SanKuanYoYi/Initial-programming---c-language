#include<stdio.h>
#include<ctype.h>

int main() {

    char d1[100], d2[100];  
    char t1[100], t2[100]; 

    char dw[4];  
    int h, m;   

    scanf("%s", d1);
    scanf("%s", d2);
    scanf("%s", t1);
    scanf("%s", t2);

    int foundday = 0;  

    for (int i = 0; d1[i] != '\0' && d2[i] != '\0'; i++) {
        if (d1[i] == d2[i]) {
            if (!foundday) {

                if (d1[i] >= 'A' && d1[i] <= 'G') {
                    foundday = 1;
                    switch (d1[i]) {
                        case 'A':
                            strcpy(dw, "MON");
                            break;
                        case 'B':
                            strcpy(dw, "TUE");
                            break;
                        case 'C':
                            strcpy(dw, "WED");
                            break;
                        case 'D':
                            strcpy(dw, "THU");
                            break;
                        case 'E':
                            strcpy(dw, "FRI");
                            break;
                        case 'F':
                            strcpy(dw, "SAT");
                            break;
                        case 'G':
                            strcpy(dw, "SUN");
                            break;
                    }
                }
            } else {
      
                if ((d1[i] >= '0' && d1[i] <= '9') || (d1[i] >= 'A' && d1[i] <= 'N')) {
                    if (d1[i] >= '0' && d1[i] <= '9') {
                        h = d1[i] - '0';
                    } else {
                        h = d1[i] - 'A' + 10;
                    }
                    break; 
                }
            }
        }
    }

    for (int i = 0; t1[i] != '\0' && t2[i] != '\0'; i++) {
        if (t1[i] == t2[i] && isalpha(t1[i])) {
            m = i; 
            break;
        }
    }

    printf("%s %02d:%02d\n", dw, h, m);

    return 0;
}
