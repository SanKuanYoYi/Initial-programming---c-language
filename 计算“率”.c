#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    double c=(double)b/a*100;
    printf("%.3f%%",c);
    
    
    return 0;
}
