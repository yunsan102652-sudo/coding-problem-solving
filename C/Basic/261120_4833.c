#include <stdio.h>
char stack[100001] = {};
int top = -1;
void push(char data)
{
	top++;
	stack[top] = data;
}
char pop()
{
	if(top>-1)
	{
		top--;
		return stack[top+1];
	}
}
int main()
{
	int total = 0;
	int pipe = 0;
	char str[100001] = {};
	fgets(str,100001,stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')//구분
		{
			if(str[i+1]==')')//자를 때
			{
				total = total + pipe;
			}
			else
			{
				pipe += 1;
			}
		}
		//쇠막대기가 끝날 때
		else if(str[i]==')')
		{
			if(str[i-1]==')')
			{
				pipe -= 1;
				total += 1;
			}
		}
	}
	printf("%d", total);
	return 0;
}