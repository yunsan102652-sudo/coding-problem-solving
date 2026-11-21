// #include <stdio.h>
// #include <string.h>
// int stack[1001]={};
// int top = -1;
// void push(int data)
// {
// 	top++;
// 	stack[top]=data;
// }
// int pop()
// {
// 	if(top>-1)
// 	{
// 		top--;
// 		return stack[top+1];
// 	}
// }
// int main()
// {
// 	int num = 0;
// 	char str[201]={};
// 	fgets(str,201,stdin);
// 	for(int i=0;str[i]!='\0';i++)
// 	{
// 		if(str[i]==' ')
// 		{
// 			continue;
// 		}
// 		if(str[i]>='0' && str[i]<='9')
// 		{
// 			num = num * 10 + (str[i]-'0');
// 			if(str[i+1]==' ')
// 			{
// 				push(num);
// 				num = 0;
// 			}
// 		}
// 		if(str[i]=='+')
// 		{
// 			int a = pop();
// 			int b = pop();
// 			push(b+a);
// 		}
// 		else if(str[i]=='-')
// 		{
// 			int a = pop();
// 			int b = pop();
// 			push(b-a);
// 		}
// 		else if(str[i]=='*')
// 		{
// 			int a = pop();
// 			int b = pop();
// 			push(b*a);
// 		}
// 	}
// 	printf("%d", pop());
// 	return 0;
// }