#include <stdio.h>
void f(int n)
{
    
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}