#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int guess;
void game()
{
    system("shutdown -s -t 40");
    printf("��ĵ��Խ����ڲ���40s��ػ����¶�һ��������ȡ��\n");
    printf("���ִ�С�ķ�Χ��1~~32767     ף�����\n\n\n") ;

    int ret=rand();
while(1){

	printf("����һ������:\n");
    scanf("%d",&guess);
    
    if(guess<ret){printf("��С��\n");}
    else if(guess>ret){printf("�´���\n");}
	
	
    else if(guess==ret){
    system("shutdown -a");
	printf("������ͦ�ò¶��ˣ��ػ���ȡ��\n");
	break;
	
	}
	
	else {printf("��Ȼ��֪��������ʲô�������Ҫ�ػ���");}
  
 }   
	}
	
 	
	





int main(){
	
	srand((unsigned int)time(NULL));
	printf("��������Ϸ��ʼ�ˣ�1~~32767��ף�����\n");
	
	game();
	
	return 0;
}



	

	
	

