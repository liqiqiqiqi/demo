#include<stdio.h>
#include<stdlib.h>
#define N 50
#include<string.h>
int Pop(char str[N],int *s)
{
	int top=-1;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
			s[++top]='(';	//top�൱������S[]���±� 
	}
	return top;
}
int Push(int top,char str[N])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==')')
			top--;
	}
	return top;
}
int main(void)
{
	int *s;
	int t1,t2;
	s=(int *)malloc(N*sizeof(int));
	char str[N];
	printf("�������ַ�����\n");
	gets(str);
	t1=Pop(str,s);
	t2=Push(t1,str);
	if(t2==-1)
		printf("����ƥ��");
	else if(t2>-1)
		printf("�����Ŷ�");
	else
		printf("�����Ŷ�");		
}

//����((3+6)()(x+y))) 
