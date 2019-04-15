#include<stdio.h>
#include<stdlib.h>
void Josephus_Ring(int *Q,int n,int s);
int main(void)
{
	int *Q;
	int n,s;
	printf("请输入n,s\n");
	scanf("%d%d",&n,&s);
	Q=(int*)malloc((n+1)*sizeof(int));
	Q[0]=10; 
	for(int i=1; i<n+1 ; i++)
		 Q[i]=i;
	
	 
	Josephus_Ring(Q,n,s);	
}

void Josephus_Ring(int *Q,int n,int s)
{
	int front=0,rear=n;
	int i;
	while(front-rear)	//队不为空 
	{
		for(i=0;i<s-1;i++)	//s=3,循环两次 
			{
				front=(front+1)%n;
				rear=(rear+1)%n;
				Q[rear]=Q[front];
			}
			front=(front+1)%n;
			printf("%5d",Q[front]);
	}
	return; 
}

