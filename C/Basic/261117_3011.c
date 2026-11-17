// #include <stdio.h>
// int main()
// {
//     int arr[1001]={};
//     int n,re=0,c=0,d=0;
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         c=0;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 c=1;
//                 re = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = re;
//             }
//         }
//         if(c==0)
//         {
//             break;
//         }
//         d++;
//     }
//     printf("%d", d);
//     return 0;
// }