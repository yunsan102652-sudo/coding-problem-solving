#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(long long int x, long long int y)
{
    
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}