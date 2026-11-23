#include <stdio.h>
int f(int x)//한 줄에 별의 출력 갯수 구하는 곳
{
    if(x==0)
    {
        return;
    }
    f(x-1);
    printf("*", x);
}
void g(int x)//다음 줄로 넘어가는 곳
{
    
}
int main()
{
    int n;
    scanf("%d", &n);
    g(n);
    return 0;
}