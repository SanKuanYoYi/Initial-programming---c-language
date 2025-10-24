#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int guess;
void game()
{
    system("shutdown -s -t 40");
    printf("你的电脑将会在不到40s后关机，猜对一个数字来取消\n");
    printf("数字大小的范围是1~~32767     祝你好运\n\n\n") ;

    int ret=rand();
while(1){

	printf("来猜一个数字:\n");
    scanf("%d",&guess);
    
    if(guess<ret){printf("猜小了\n");}
    else if(guess>ret){printf("猜大了\n");}
	
	
    else if(guess==ret){
    system("shutdown -a");
	printf("运气还挺好猜对了，关机已取消\n");
	break;
	
	}
	
	else {printf("虽然不知道你在输什么但是你快要关机了");}
  
 }   
	}
	
 	
	





int main(){
	
	srand((unsigned int)time(NULL));
	printf("猜数字游戏开始了（1~~32767）祝你好运\n");
	
	game();
	
	return 0;
}



	

	
	

