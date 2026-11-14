#include <stdio.h>
#include <stdlib.h>
int n,x,y;
int arr[27][27]={};
int danji[700]={};
int danjic=0;
int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
int q[700][2]={};
int front=-1;
int rear=-1;
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
	front=-1;
	rear=-1;
	push(a,b);
	arr[a][b]=0;
	while(front < rear)
	{
		pop();
		for(int k=0;k<4;k++)
		{
			int nx=x+dir[k][0];
			int ny=y+dir[k][1];
			if(arr[nx][ny]==1)
			{
				push(nx,ny);
				arr[nx][ny]=0;
			}
		}
	}
	return rear+1;
}
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}
    return 0;
}