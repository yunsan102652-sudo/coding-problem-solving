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
		
	}
	printf("%d", total);
	return 0;
}