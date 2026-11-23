// #include <stdio.h>
// int arr[51][51]={};
// int g(int x, int y)//양쪽이 1이 출력되게 아니면 합이 출력되게 계산하는 곳
// {
//     if(arr[x][y]!=0)
//     {
//         return arr[x][y];
//     }
//     if(y==1||y==x)
//     {
//         return arr[x][y]=1;
//     }
//     else
//     {
//         return arr[x][y]=g(x-1,y-1) + g(x-1,y);
//     }
// }

// int f(int x, int y) // arr[x][1] ~ arr[x][x] 출력하기(한 줄)
// {
//     if(x==0||y==0)
//     {
//         return;
//     }
//     f(x,y-1);
//     printf("%d ", g(x,y));
// }

// void h(int x, int y)//출력이 다 되면 다음 줄로 넘어가는 곳
// {
//     if(x==0||y==0)
//     {
//         return;
//     }
//     h(x-1,y-1);
//     printf("\n", f(x,y));
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     h(n,n);
//     return 0;
// }