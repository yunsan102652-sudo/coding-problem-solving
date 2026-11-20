#include <stdio.h>
#include <string.h>
int stack[1001]={};
int top = -1;
void push(int data)
{
	top++;
	stack[top]=data;
}
int pop()
{
	if(top>-1)
	{
		top--;
		return stack[top+1];
	}
}
int main()
{
	int num = 0;
	char str[201]={};
	fgets(str,201,stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		
	}
	printf("%d", pop());
	return 0;
}