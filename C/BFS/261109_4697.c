#include <stdio.h>
#include <stdlib.h>
int n,x,y;
int map[102][102]={};
int q[1000][2]={};
int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
int front=-1;
int rear=-1;
void push(int a, int b)
{
	
}
void pop()
{
	
}
void bfs(int a, int b)
{
	
}
int main()
{
	scanf("%d\n", &n);
	scanf("%d %d\n", &x, &y);
	map[x][y]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			bfs(i,j);
		}
	}
	return 0;
}