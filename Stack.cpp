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
			s[++top]='(';	//top相当于数组S[]的下标 
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
	printf("请输入字符串：\n");
	gets(str);
	t1=Pop(str,s);
	t2=Push(t1,str);
	if(t2==-1)
		printf("括号匹配");
	else if(t2>-1)
		printf("左括号多");
	else
		printf("右括号多");		
}

//测试((3+6)()(x+y))) 
