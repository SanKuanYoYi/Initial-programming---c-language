#include <stdio.h>
#include <stdlib.h>  

int main()  
{
    int h1, min1, h2, min2;
    printf("请分两次输入两个时间点：几时几分（空格分开）\n");
    scanf("%d %d", &h1, &min1);  
    scanf("%d %d", &h2, &min2);  
    
    if (min1 < 0 || min1 >= 60 || min2 < 0 || min2 >= 60) 
	{
	
	
    printf("你输入的时间不对吧这？"); 
    return 0; 
	}
    
    int T1 = h1 * 60 + min1;
    int T2 = h2 * 60 + min2;
    int t = abs(T1 - T2);
    printf("时间差为%d小时%d分", t / 60, t % 60);
    
    return 0;  
}
