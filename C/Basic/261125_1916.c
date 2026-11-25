// #include <stdio.h>
// int arr[201]={};
// int f(int n)
// {
//     if(arr[n]!=0)
//     {
//         return arr[n] % 10009;
//     }
//     else if(n==1||n==2)
//     {
//         arr[n] = 1;
//     }
//     else
//     {
//         arr[n] = (f(n-1)+f(n-2)) % 10009;
//     }
//     return arr[n];
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", f(n));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int n,k,m,x,a=1,b;
// int front=-1;
// int rear=-1;
// int q[100002]={};
// int code[100002]={};
// int path[100002]={};
// int parent[100002]={};
// int question[52]={};
// int hash[1000003]={};
// char s[35]={};

// void push(int a)
// {
//     rear++;
//     q[rear]=a;
// }
// void pop()
// {
//     front++;
//     x=q[front];
// }
// void bfs(int a, int b)
// {
//     front=-1;
//     rear=-1;
//     for(int i=1;i<=n;i++)
//     {
//         parent[i]=-1;
//     }
//     push(a);
//     parent[a]=0;
//     while(front < rear)
//     {
//         int max=rear;
//         for(int i=front+1;i<=max;i++)
//         {
//             pop();
//             for(int j=0;j<k;j++)
//             {
//                 int next=code[x]^(1<<j);
//                 int h=next%1000003;

//                 while(hash[h]!=0 && code[hash[h]]!=next)
//                 {
//                     h=(h+1)%1000003;
//                 }

//                 int idx=hash[h];

//                 if(idx!=0 && parent[idx]==-1)
//                 {
//                     parent[idx]=x;
//                     push(idx);
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     scanf("%d %d", &n, &k);
//     for(int i=1;i<=n;i++)
//     {
//         scanf("%s", s);
//         code[i]=strtol(s, NULL, 2);

//         int h=code[i]%1000003;
//         while(hash[h]!=0)
//         {
//             h=(h+1)%1000003;
//         }
//         hash[h]=i;
//     }
//     scanf("%d", &m);
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d", &question[i]);
//     }
//     bfs(a,0);
//     for(int i=0;i<m;i++)
//     {
//         b=question[i];
//         if(parent[b]!=-1)
//         {
//             int count=0;
//             int now=b;
//             while(now!=0)
//             {
//                 path[count]=now;
//                 count++;
//                 now=parent[now];
//             }
//             for(int j=count-1;j>=0;j--)
//             {
//                 printf("%d ", path[j]);
//             }
//             printf("\n");
//         }
//         else
//         {
//             printf("-1\n");
//         }
//     }
//     return 0;
// }