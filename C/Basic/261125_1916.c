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