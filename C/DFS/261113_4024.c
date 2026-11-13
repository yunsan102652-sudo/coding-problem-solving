// #include <stdio.h>
// #include <stdlib.h>
// int W,H;
// char map[102][102]={};
// void dfs(int x, int y)
// {
// 	map[x][y]='.';
// 	if(map[x-1][y-1]=='L')
// 	{
// 		dfs(x-1,y-1);
// 	}
// 	if(map[x][y-1]=='L')
// 	{
// 		dfs(x,y-1);
// 	}
// 	if(map[x+1][y-1]=='L')
// 	{
// 		dfs(x+1,y-1);
// 	}
// 	if(map[x-1][y]=='L')
// 	{
// 		dfs(x-1,y);
// 	}
// 	if(map[x+1][y]=='L')
// 	{
// 		dfs(x+1,y);
// 	}
// 	if(map[x-1][y+1]=='L')
// 	{
// 		dfs(x-1,y+1);
// 	}
// 	if(map[x][y+1]=='L')
// 	{
// 		dfs(x,y+1);
// 	}
// 	if(map[x+1][y+1]=='L')
// 	{
// 		dfs(x+1,y+1);
// 	}
// }
// int main()
// {
// 	int count = 0;
// 	scanf("%d %d", &W, &H);
// 	for(int i=1;i<=H;i++)
// 	{
// 		for(int j=1;j<=W;j++)
// 		{
// 			scanf(" %c",&map[i][j]);
// 		}
// 	}
// 	for(int i=1;i<=H;i++)
// 	{
// 		for(int j=1;j<=W;j++)
// 		{
// 			if(map[i][j]=='L')
// 			{
// 				count++;
// 				dfs(i,j);
// 			}
// 		}
// 	}
// 	printf("%d", count);
// 	return 0;
// }