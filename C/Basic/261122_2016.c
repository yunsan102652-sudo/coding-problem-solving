// #include <stdio.h>
// char stack[201]={};
// int top = -1;
// void push(char data)
// {
// 	top++;
// 	stack[top] = data;
// }
// char pop()
// {
// 	if(top>-1)
// 	{
// 		top--;
// 		return stack[top+1];
// 	}
// }
// int main()
// {
// 	int n;
// 	char str[201]={};
// 	scanf("%d", &n);
// 	scanf("%s", str);
// 	int count = 0;
// 	for(int i=n-1;i>-1;i--)
// 	{
// 		push(str[i]);
// 		count++;
// 		if(count == 3 && top != -1 && str[i-1] != 0)
// 		{
// 			push(',');
// 			count = 0;
// 		}
// 	}
// 	while(top != -1)
// 	{
// 		printf("%c", pop());
// 	}
// 	return 0;
// }

#include <stdio.h>
char stack[201]={};
char stack2[301]= {};
int top=-1;
int top2=-1;
void push(char data)
{
	top++;
	stack[top]=data;
}
char pop()
{
	if(top>-1)
	{
		top--;
		return stack[top+1];
	}
}
void push2(char data)
{
	top2++;
	stack2[top2]=data;
}
char pop2()
{
	if(top2>-1)
	{
		top2--;
		return stack2[top2+1];
	}
}
int main()
{
	int n;//n = 숫자의 길이
	char str[201]={};//m = n 길이의 숫자
	scanf("%d", &n);
	scanf("%s", str);
	for(int i=0;i<n;i++)//하나씩 거꾸로 stack에다가 넣는다.
	{
		push(str[i]);
	}
	int count = 0;
	while(top != -1)
	{
	    
	}
	while(top2 != -1)
	{
	    printf("%c", pop2());
	}
	return 0;
}