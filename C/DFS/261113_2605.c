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
    printf("%d", pangc);
    return 0;
}