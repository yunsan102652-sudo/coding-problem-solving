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