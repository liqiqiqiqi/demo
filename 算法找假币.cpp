#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void Coins(int coins[])
{
	if(coins[0]+coins[1]+coins[2]==coins[3]+coins[4]+coins[5])
	{
		if(coins[6]>coins[7])
			printf("8�Ǽٱ�");
		else
			printf("7�Ǽٱ�");	
	}
	else if(coins[0]+coins[1]+coins[2]>coins[3]+coins[4]+coins[5]) 
	{
		if(coins[3]>coins[4])
			printf("5�Ǽٱ�");
		else if(coins[3]=coins[4])
			printf("6�Ǽٱ�");
		else
			printf("4�Ǽٱ�");		
	}
	else{
		if(coins[0]>coins[1])
			printf("2�Ǽٱ�");
		else if(coins[0]=coins[1])
			printf("3�Ǽٱ�");
		else
			printf("1�Ǽٱ�");	
	}
}
int main (void)
{
	int coins[8]={0};
	int i;
	for(i=0;i<8;i++)
		coins[i]=10;
	//���������,�����±�	
	srand((unsigned)time(NULL));
	int j= rand()%10;	//��0��10�� 
	printf("%d\n",j+1);
	coins[j]=5;
	
	for(int k=0;k<8;k++)
		printf("%5d",coins[k]);
	
	printf("�ٱ��ǣ�\n");
	Coins(coins);
	
		
 } 
