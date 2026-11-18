#include <stdio.h>
int f(int str[172][172],int i, int j)
{
    int x,y;
    int c = 0;
    for(x=-1;x<=1;x++)
    {
        for(y=-1;y<=1;y++)
        {
            if(x==0&&y==0)
            {
                continue;
            }
            if(str[i+x][j+y]==1)
            {
                c++;
            }
        }
    }
    return c;
}
int main()
{
    int str[172][172]={};
    int arr[172][172]={};
    int a,b;
    int x,y,z;
    int k;
    scanf("%d %d", &a, &b);
    scanf("%d %d %d", &x, &y, &z);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            scanf("%d", &str[i][j]);
        }
    }
    scanf("%d", &k);
    for(int g=0;g<k;g++)
    {
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                int c = f(str,i,j);
                
            }
        }
        for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				str[i][j]=arr[i][j];
			}
		}
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            printf("%d ", str[i][j]);
        }
        printf("\n");
    }
    return 0;
}