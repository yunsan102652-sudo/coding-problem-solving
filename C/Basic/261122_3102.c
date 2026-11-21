#include <stdio.h>
int stack[201]={};
int top=-1;
void push(int data)
{
	top++;
	stack[top] = data;
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
	int n,x;
	char str[201]={};
	scanf("%d\n", &n);//정수 다음 문자열을 받을 때 카운트 되어서 줄 바꿈 해줘야함.
	for(int i=0;i<n;i++)
	{
		fgets(str,201,stdin);
		if(str[1]=='u')//u==push
		{
			
		}
		else if(str[1]=='o')
		{
			if(str[0]=='t')//t==top
			{
				
			}
			else//pop
			{
				pop();
			}
		}
		else if(str[1]=='i')//i==size
		{
			printf("%d\n", top+1);
		}
		else if(str[1]=='m')//m==empty
		{
			if(top==-1)
			{
				printf("true");
				printf("\n");
			}
			else
			{
				printf("false");
				printf("\n");
			}
		}
	}
	return 0;
}