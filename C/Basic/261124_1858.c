// #include <stdio.h>
// int a[51][51]={};

// int f(int x, int y)
// {
//     if(a[x][y] != 0)
//     {
//         return a[x][y];
//     }
//     if(y==1||y==x)
//     {
//         return a[x][y]=1;
//     }
//     return a[x][y] = f(x-1,y-1) + f(x-1,y);
// }

// int main()
// {
//     int n,k;
//     scanf("%d %d", &n, &k);
//     f(n,k);
//     printf("%d", f(n,k));
//     return 0;
// }