#include <stdio.h>
char stack[201]={};
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
	int n;
	char str[201]={};
	scanf("%d", &n);
	scanf("%s", str);
	int count = 0;
	for(int i=n-1;i>-1;i--)
	{
		push(str[i]);
		
	}
	while(top != -1)
	{
		printf("%c", pop());
	}
	return 0;
}