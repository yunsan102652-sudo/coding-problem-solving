#include <stdio.h>
char stack[101]={};
char stack2[101]={};
int stack3[101]={};
int top=-1;
int top2=-1;
int top3=-1;
int pop()
{
	if(top>-1)
	{
		return stack[top--]-'0';
	}
}
int pop2()
{
	if(top2>-1)
	{
		return stack2[top2--]-'0';
	}
}
void push(int data)
{
	top3++;
	stack3[top3]=data;
}
int pop3()
{
	if(top3>-1)
	{
		return stack3[top3--];
	}
}
int main()
{
	scanf("%s", stack);
	scanf("%s", stack2);
	if(strcmp(stack, stack2)==0)
	{
		printf("0");
		return 0;
	}
	if(strlen(stack)<strlen(stack2) || strlen(stack)==strlen(stack2) && strcmp(stack, stack2)<0)
	{
		char temp[201]={};
		strcpy(temp,stack);
		strcpy(stack,stack2);
		strcpy(stack2,temp);
		printf("-");
	}
	
	while(top3!=-1)
	{
		printf("%d", pop3());
	}
	return 0;
}