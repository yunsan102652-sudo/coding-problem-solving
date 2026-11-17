// #include <stdio.h>
// int main()
// {
//     int arr[101]={};
//     int n,max=0,re=0;
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         max=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[max]<arr[j])
//             {
//                 max = j;
//             }
//         }
//         re = arr[i];
//         arr[i] = arr[max];
//         arr[max] = re;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[101]={};
//     int n,re=0;
//     scanf("%d", &n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]<arr[j+1])
//             {
//                 re = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = re;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }