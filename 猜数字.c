#include <stdio.h>
int main(  )
{
	const int NUM=666;
	int num;
	int guessCount = 0;
	
	printf("�����������Ϸ�ɣ�����������ܲ���");
	 
	
	while(1) {
	printf("�������һ��������\n"); 
	scanf("%d",&num);
	guessCount++;
	

	if(num>666){
		printf("��������ִ�Ŷ\n");
		}
		
	else if(num<666) {
		printf("���������СŶ\n");
	    }
	else {
		printf("666�¶���666!��һ������%d��\n",guessCount);
		break;
	    }
	
	
}
	
	return 0;
	
}
