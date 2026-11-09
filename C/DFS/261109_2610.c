#include <stdio.h>
#include <stdlib.h>
int x,y;
char map[12][12]={};
int dir[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
void dfs(int x, int y)
{
    if(x<0 || y<0 || x>=10 || y>=10 || map[y][x]!='_')
    {
        return;
    }
    map[y][x]='*';
    for(int i=0;i<4;i++)
    {
        dfs(x+dir[i][0], y+dir[i][1]);
    }
}
int main()
{
    for(int i=0; i<10;i++)
    {
        scanf("%s", &map[i]);
    }
    scanf("%d %d", &x, &y);
    dfs(x,y);
    return 0;
}