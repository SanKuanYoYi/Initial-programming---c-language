#include <stdio.h>
#include <stdlib.h>  

int main()  
{
    int h1, min1, h2, min2;
    printf("���������������ʱ��㣺��ʱ���֣��ո�ֿ���\n");
    scanf("%d %d", &h1, &min1);  
    scanf("%d %d", &h2, &min2);  
    
    if (min1 < 0 || min1 >= 60 || min2 < 0 || min2 >= 60) 
	{
	
	
    printf("�������ʱ�䲻�԰��⣿"); 
    return 0; 
	}
    
    int T1 = h1 * 60 + min1;
    int T2 = h2 * 60 + min2;
    int t = abs(T1 - T2);
    printf("ʱ���Ϊ%dСʱ%d��", t / 60, t % 60);
    
    return 0;  
}
