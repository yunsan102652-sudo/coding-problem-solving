#include <stdio.h>
#include <stdlib.h>
int n;
int map[102][102]={};
int safe[102][102]={};
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int x, int y, int rain)
{
	if(x<1 || y<1 || x>n || y>n || map[y][x]<=rain || safe[y][x]==1)
	{
		return;
	}
	safe[y][x]=1;
	for(int i=0;i<4;i++)
	{
		dfs(x+dir[i][0],y+dir[i][1],rain);
	}
}
int main()
{
	int max=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	for(int rain=0;rain<=100;rain++)
	{
		int count = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				safe[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(map[i][j]>rain&&safe[i][j]==0)
				{
					dfs(j,i,rain);
					count++;
				}
			}
		}
		if(count > max)
		{
			max = count;
		}
	}
	printf("%d", max);
	return 0;
}