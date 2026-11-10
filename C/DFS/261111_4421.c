#include <stdio.h>
#include <stdlib.h>
int n;
int arr[27][27]={};
int danji[700]={};
int danjic = 0; // 단지 수
int count = 1;

int dir[4][2]={{-1,0}, {+1,0}, {0, -1}, {0, +1}};

int dfs(int x, int y)
{
	if (x<1 || y<1 || x>n || y>n ||arr[x][y]!=1) return ;
    arr[x][y]=0;
    danji[danjic]++;
	for(int i=0;i<4;i++)
	{
		dfs(x+dir[i][0],y+dir[i][1]);		
	}
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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]==1)
            {
                dfs(i,j);
                danjic++;
            }
        }
    }
    printf("%d\n", danjic);
    for(int i=0;i<danjic-1;i++)
    {
        for(int j=0;j<danjic-1-i;j++)
        {
            if(danji[j]>danji[j+1])
            {
                int t;
                t=danji[j];
                danji[j]=danji[j+1];
                danji[j+1]=t;
            }
        }
    }
    for(int i=0;i<danjic;i++)
    {
        printf("%d\n", danji[i]);
    }
    return 0;
}