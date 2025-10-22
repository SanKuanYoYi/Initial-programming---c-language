#include<stdio.h>

int main()
{
    char m;
    scanf("%c", &m);
    
   
    int n = m - 'A' + 1;
    
    
    for(int i = 1; i <= n; i++)
    {
        
        for(int j = 1; j<= n - i; j++)
        {
            printf(" ");
        }
        
      
        for(int j = 0; j<i; j++)
        {
            printf("%c", 'A' + j);
        }
        
       
        for(int j = i - 2; j>=0; j--)
        {
            printf("%c", 'A' + j);
        }
        
        printf("\n");
    }
    
    return 0;
}
