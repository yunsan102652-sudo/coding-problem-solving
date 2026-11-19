#include <stdio.h>
long long int stack[80001]={};
int top = -1;
void push(long long int data)
{
    top++;
    stack[top]=data;
}
int pop()
{
    if(top>-1)
    {
        return stack[top--];
    }
}
int main()
{
    int N;
    long long int m;
    long long int sum = 0;//소들의 수
    scanf("%d", &N);
    for(int i=0;i<N;i++)
    {
        scanf("%lld", &m);
        
    }
    printf("%lld", sum);
    return 0;
}