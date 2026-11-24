#include <stdio.h>
void g(int x)//한 줄에 출력되는 수 구하는 곳
{
    if(x==0)
    {
        return;
    }
    g(x-1);
    printf("%d ", x);
}

void f(int x)//한 줄을 넘기는 곳
{
    
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n);
    return 0;
}