#include <stdio.h>

int n, k, d[1010];
int findi(int x)
{
    int i,m=d[x],mi=-1;
    
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", findi(k));
}