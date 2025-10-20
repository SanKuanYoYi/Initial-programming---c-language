#include <stdio.h>
#include <ctype.h>

int main()
{
	
	char password[255]; 
    int n=0;
    scanf("%s",password);
    for (int i = 0;password[i]!='\0';i++)
    {if(!isdigit(password[i]))
    n++;
	}
    
	printf("%d",n);
	
	return 0; 
	
}
