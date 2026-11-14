#include <stdio.h>
#include <stdlib.h>
int n,m,a,b,z=0;
int arr[101][101]={};
int v[101]={};
void dfs(int x)
{

}
int main()
{
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d", &a, &b);
        arr[a][b] = arr[b][a] = 1;
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(v[i]==1)
        {
            z++;
        }
    }
    printf("%d", z-1);
    return 0;
}