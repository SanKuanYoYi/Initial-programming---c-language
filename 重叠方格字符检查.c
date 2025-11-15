#include<stdio.h>
int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    
    char square[a][b];
    for(int i=0;i<a;i++){
        scanf("%s",square[i]);
    }
    
    int count=0;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<b-1;j++){
            
            int fcount=0,acount=0,ccount=0,ecount=0;
            for (int ii=0;ii<2;ii++){
                for (int jj=0;jj<2;jj++){
                    char ch=square[i+ii][j+jj];
                    if (ch=='f') fcount++;
                    else if (ch=='a') acount++;
                    else if (ch=='c') ccount++;
                    else if (ch=='e') ecount++;
                }
            }
            if (fcount==1&& acount==1 && ccount==1 && ecount==1){
                count++;
            }
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}
