#include <stdio.h>
#include <stdlib.h>
int arr[9][9]={};
int front=-1;
int rear=-1;
int q[52][2]={};
int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
int x,y;
int pangc=0;
void push(int a, int b)
{
	rear++;
	q[rear][0]=a;
	q[rear][1]=b;
}
void pop()
{
	front++;
	x=q[front][0];
	y=q[front][1];
}
int bfs(int a, int b)
{

}
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=7;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(arr[i][j]>0)
			{
				bfs(i,j);
			}
		}
	}
	printf("%d", pangc);
	return 0;
}