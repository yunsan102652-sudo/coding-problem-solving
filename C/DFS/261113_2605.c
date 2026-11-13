#include <stdio.h>
#include <stdlib.h>
int arr[9][9]= {};
int a=0;
int count=0;
int pang=0;
int pangc=0; //캔디팡 수
int main()
{
    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<=7; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<=7; j++)
        {
            if(arr[i][j]!=0)
            {
                count=0;
                a = arr[i][j];
                dfs(i,j,a);
                if(count>=3)
                {
                    pangc++;
                }
            }
        }
    }
    printf("%d", pangc);
    return 0;
}