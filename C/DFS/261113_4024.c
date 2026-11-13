#include <stdio.h>
#include <stdlib.h>
int W,H;
char map[102][102]={};
int main()
{
	int count = 0;
	scanf("%d %d", &W, &H);
	for(int i=1;i<=H;i++)
	{
		for(int j=1;j<=W;j++)
		{
			scanf(" %c",&map[i][j]);
		}
	}
    printf("%d", count);
	return 0;
}