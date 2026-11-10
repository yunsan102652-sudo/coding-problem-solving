#include <stdio.h>
#include <stdlib.h>
int map[21][21]={};
int dir[4][2]={{+1,0}, {0,+1}, {+1,+1}, {-1,+1}};
int dfs(int a, int b, int d, int color)
{
	if(map[a][b]!=color)
	{
		return 0;
	}
	return 1+dfs(a+dir[d][0],b+dir[d][1],d,color);
}
int main()
{
	int color=0;
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	for(int i=1;i<=19;i++)
	{
		for(int j=1;j<=19;j++)
		{
			if(map[i][j]==0)
			{
				continue;
			}
			int stone = map[i][j];
			for(int k=0;k<4;k++)
			{
				if(map[i-dir[k][0]][j-dir[k][1]]!=stone)	// 시작할때 내가 첫빠따야???
				{
					int count = dfs(i,j, k, stone);
					if(count==5) //  승부 났어?? 딱 5개만!! 연속으로 있어??
					{
						printf("%d\n", stone);
						printf("%d %d\n", i, j);
						return 0;
					}
				}
			}
		}
	}
	color++;
	if(color!=0)
	{
		printf("0");
	}
	return 0;
}