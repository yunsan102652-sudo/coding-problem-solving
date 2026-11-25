#include <stdio.h>
void f(a, b)
{
    if(a>b)
    {
        return;
    }
    
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    f(a, b);
    return 0;
}