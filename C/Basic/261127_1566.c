#include <stdio.h>

int a, n;
long long int pow(long long int b, long long int c)
{
    long long int x = b;
    if(c==0)
    {
        x = 1;
    }
    else if(b==1)
    {
        x = 1;
    }
    
    return x;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}