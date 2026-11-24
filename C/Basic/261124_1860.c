// #include <stdio.h>
// void g(int x)//한 줄에 출력되는 수 구하는 곳
// {
//     if(x==0)
//     {
//         return;
//     }
//     g(x-1);
//     printf("%d ", x);
// }

// void f(int x)//한 줄을 넘기는 곳
// {
//     if(x==0)
//     {
//         return;
//     }
//     f(x-1);
//     g(x);
//     printf("\n");
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     f(n);
//     return 0;
// }

// #include <stdio.h>
// void ff(int x)
// {
//     if(x==0)
//     {
//         return;
//     }
//     ff(x-1);
//     printf("%d ", x);
// }
// void f(int x)
// {
//     if(x==0)
//     {
//         return;
//     }
//     f(x-1);
//     ff(x);
//     printf("\n");
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     f(n);
//     return 0;
// }