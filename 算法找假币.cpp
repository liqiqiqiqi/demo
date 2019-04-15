#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void Coins(int coins[])
{
	if(coins[0]+coins[1]+coins[2]==coins[3]+coins[4]+coins[5])
	{
		if(coins[6]>coins[7])
			printf("8是假币");
		else
			printf("7是假币");	
	}
	else if(coins[0]+coins[1]+coins[2]>coins[3]+coins[4]+coins[5]) 
	{
		if(coins[3]>coins[4])
			printf("5是假币");
		else if(coins[3]=coins[4])
			printf("6是假币");
		else
			printf("4是假币");		
	}
	else{
		if(coins[0]>coins[1])
			printf("2是假币");
		else if(coins[0]=coins[1])
			printf("3是假币");
		else
			printf("1是假币");	
	}
}
int main (void)
{
	int coins[8]={0};
	int i;
	for(i=0;i<8;i++)
		coins[i]=10;
	//产生随机数,用于下标	
	srand((unsigned)time(NULL));
	int j= rand()%10;	//（0，10） 
	printf("%d\n",j+1);
	coins[j]=5;
	
	for(int k=0;k<8;k++)
		printf("%5d",coins[k]);
	
	printf("假币是：\n");
	Coins(coins);
	
		
 } 
