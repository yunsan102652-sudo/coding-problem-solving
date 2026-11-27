#include <stdio.h>

int a, b;

int gcd(int n, int m)
{
    int i=m;
    while(m!=0)
    {
        if(n % i==0&&m % i==0)
        {
            return i;
        }
        else
        {
            i-=1;
        }
    }
    return i;
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}