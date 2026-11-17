#include <stdio.h>
int queue[201]={};
int rear = -1; //마지막으로 들어온 데이터의 위치 
int front = -1; //마지막으로 나간 데이터의 위치 
void push(int data)
{
	rear++;
	queue[rear]=data;
}
int pop()
{
	if(front!=rear)
	{
		return queue[++front];
	}
}
int main()
{
	int n;
	char arr[201]={};
	scanf("%d\n", &n);
	for(int i=0;i<n;i++)
	{
		fgets(arr,201,stdin);
		if(arr[1]=='u')//push
		{
			int a = 0;
			for(int j=6;arr[j]!=' ';j++)
			{
				a = a*10+(arr[j]-'0');
			}
			push(a);
		}
		else if(arr[1]=='o')//pop
		{
			pop();
		}
		else if(arr[0]=='f')//front
		{
			if(front==rear)
			{
				printf("-1");
				printf("\n");
			}
			else
			{
				printf("%d\n", queue[front+1]);
			}
		}
		else if(arr[0]=='s')//size
		{
			printf("%d\n", rear-front);
		}
		else if(arr[0]=='b')//back
		{
			if(front==rear)
			{
				printf("-1");
				printf("\n");
			}
			else
			{
				printf("%d\n", queue[rear]);
			}
		}
		else if(arr[1]=='m')//empty
		{
			if(front==rear)
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