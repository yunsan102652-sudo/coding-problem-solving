#include <stdio.h>
char stack[101]={};
char stack2[101]={};
int stack3[101]={};
int top = -1;
int top2 = -1;
int top3 = -1;
int pop()
{
	if(top>-1)
	{
		top--;
		return stack[top+1]-'0';
	}
}
int pop2()
{
	if(top2>-1)
	{
		top2--;
		return stack2[top2+1]-'0';
	}
}
void push3(int data)
{
	top3++;
	stack3[top3]=data;
}
int pop3()
{
	if(top3>-1)
	{
		top3--;
		return stack3[top3+1];
	}
}
int main()
{
	scanf("%s", stack);
	scanf("%s", stack2);
	top=strlen(stack)-1;
	top2=strlen(stack2)-1;
	int num = 0;
	
	if(num!=0)
	{
		push3(num);
	}
	while(top3!=-1)
	{
		printf("%d", pop3());
	}
	return 0;
}