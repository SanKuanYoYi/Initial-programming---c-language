#include<stdio.h>
#include<math.h>

int main(){
    
    int n;
    scanf("%d", &n);
 
    int coefficients[100];

    for(int i = 0; i <= n; i++){
        scanf("%d", &coefficients[i]);
    }
    
    int isfirst = 1;

    for(int i = 0; i <= n; i++){
        int coefficent = coefficients[i];
        int k = n - i; 

        if(coefficent == 0) continue;

        if(!isfirst){
            if(coefficent > 0) {
                printf("+");
            }
            else {
                printf("-"); 
            }

        } else {

            if(coefficent < 0) {
                printf("-");
            }
        }

        if(k == 0){
            printf("%d", abs(coefficent));
        } 
        else {int temp = abs(coefficent);

            if(temp != 1){
                printf("%d", temp);
            }

            if(k == 1){
                printf("x");
        } 
        else { printf("x^%d", k);
            }
        }
        
        isfirst = 0; 
    }


    return 0;
}
