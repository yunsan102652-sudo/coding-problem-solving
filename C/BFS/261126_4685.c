#include <stdio.h>
#include <stdlib.h>
int n,k,x,a,b;
int front=-1;
int rear=-1;
int q[1002]={};
int code[1002]={};
int path[1002]={};
int parent[1002]={};
char s[35]={};

void push(int a)
{
    rear++;
    q[rear]=a;
}
void pop()
{
    front++;
    x=q[front];
}
void bfs(int a, int b)
{
    front=-1;
    rear=-1;
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
    }
    push(a);
    parent[a]=0;
    while(front < rear)
    {
        int max=rear;
        for(int i=front+1;i<=max;i++)
        {
            pop();
            if(x==b)
            {
                return;
            }
            for(int j=1;j<=n;j++)
            {
                if(parent[j]==-1)
                {
                    int bit=code[x]^code[j];
                    if(bit!=0 && (bit&(bit-1))==0)
                    {
                        parent[j]=x;
                        push(j);
                    }
                }
            }
        }
    }
}
int main()
{
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++)
    {
        scanf("%s", s);
        code[i]=strtol(s, NULL, 2);
    }
    scanf("%d %d", &a, &b);
    bfs(a,b);
    if(parent[b]!=-1)
    {
        int count=0;
        int now=b;
        
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}