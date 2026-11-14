#include <stdio.h>
#include <stdlib.h>
int compare[1000001]={};
int k;

int main()
{
    int n;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &compare[i]);
    }
    printf("%d", bs(0,n-1));
    return 0;
}