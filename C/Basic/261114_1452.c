// #include <stdio.h>
// #include <stdlib.h>
// int arr[100001]={};
// int n;
// void shall(int arr[],int n)
// {
//     int h,i,j,m;
//     for(h=n/2;h>0;h/=2)
//     {
//         for(i=h;i<n;i++)
//         {
//             m = arr[i];
//             for(j=i;j>=h&&arr[j-h]>m;j-=h)
//             {
//                 arr[j]=arr[j-h];
//             }
//             arr[j]=m;
//         }
//     }
// }
// int main()
// {
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     shall(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }