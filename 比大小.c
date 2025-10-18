#include <stdio.h>
int main(  )
{
	const int NUM=666;
	int num;
	int guessCount = 0;
	
	printf("来玩猜数字游戏吧！看看你你磁能猜中");
	 
	
	while(1) {
	printf("随便输入一个正整数\n"); 
	scanf("%d",&num);
	guessCount++;
	

	if(num>666){
		printf("输入的数字大哦\n");
		}
		
	else if(num<666) {
		printf("输入的数字小哦\n");
	    }
	else {
		printf("666猜对了666!你一共猜了%d次\n",guessCount);
		break;
	    }
	
	
}
	
	return 0;
	
}
