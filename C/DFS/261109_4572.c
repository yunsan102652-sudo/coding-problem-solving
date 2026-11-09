#include <stdio.h>
#include <stdlib.h>
int M,N,K;
int draw[10001]={};
int map[101][101]={};
int count = 0;
int dir[4][2]={{-1,0},{+1,0},{0,-1},{0,+1}};
//void view()
//{
//	for(int i=0;i<N;i++)//그림 확인 dfs전
//	{
//		for(int j=0;j<M;j++)
//		{
//			printf("%d ",map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
void dfs(int x, int y)
{
	if(x<0||y<0||x>=N||y>=M||map[x][y]==1)
	{
		return;
	}
	map[x][y]=1;
	draw[count]++;
	for(int i=0;i<4;i++)
	{
		dfs(x+dir[i][0],y+dir[i][1]);
	}
}
int main()
{
	scanf("%d %d %d", &M, &N, &K);
	int x1,y1,x2,y2;
	for(int k=0;k<K;k++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int i=x1;i<x2;i++)
		{
			for(int j=y1;j<y2;j++)
			{
				map[i][j]=1;
			}
		}
	}
//	view();
	for(int i=0;i<N;i++)//0 발견시 dfs
	{
		for(int j=0;j<M;j++)
		{
			if(map[i][j]==0)
			{
				dfs(i,j);
//				printf("%d %d\n", i, j);
				count++;
//				view();
			}
		}
	}
	printf("%d\n", count);//갯수 출력
	for(int i=0;i<count-1;i++)//오름차순
	{
		for(int j=0;j<count-1-i;j++)
		{
			if(draw[j]>draw[j+1])
			{
				int t;
				t=draw[j];
				draw[j]=draw[j+1];
				draw[j+1]=t;
			}
		}
	}
	for(int i=0;i<count;i++)
	{
		printf("%d ", draw[i]);
	}
	return 0;
}