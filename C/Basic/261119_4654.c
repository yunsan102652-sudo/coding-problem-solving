#include <stdio.h>
int stack[500001][2]={};
int top=-1;
void push(int data, int dt)
{
    top++;
    stack[top][0]=data;
    stack[top][1]=dt;
}
int pop()
{
    if(top!=-1)
    {
        return stack[top--];
    }
}
int main()
{
    int n,h;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &h);
        while(top!=-1 && stack[top][0] < h)
        {
            pop();
        }
        
    }
    return 0;
}