#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int A, B;
    scanf("%d %d",&A,&B);

    if (A == 0 && B == 0) {
        printf("0\n");
        return 0;
    }

    char biA[33]={0}; 
    char biB[33]={0};
    
    int tempA=A,tempB=B;
    int kA=0,kB=0;
    
    if (A==0){
        biA[0]='0';
        biA[1]='\0';
    } 
    else {char revA[33]={0};
        int k=0;
        while (tempA>0){
            revA[k++]=(tempA%2)+'0';
            tempA/=2;
        }
 
        for (int i=0;i<k;i++){
            biA[i]=revA[k-1-i];
        }
        biA[k]='\0';
    }

    if (B==0){
        biB[0]='0';
        biB[1]='\0';
    }
    else{char revB[33]={0};
        int k=0;
        while (tempB>0){
            revB[k++]=(tempB%2)+'0';
            tempB/=2;
        }

        for (int i=0;i<k;i++){
            biB[i]=revB[k-1-i];
        }
        biB[k]='\0';
    }

    long long num1 = atoll(biA);
    long long num2 = atoll(biB);
    
    printf("%lld\n",num1+num2);
    
    return 0;
}
