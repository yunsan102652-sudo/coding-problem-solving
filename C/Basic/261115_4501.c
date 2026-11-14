// #include <stdio.h>
// int arr[10]={};
// int main()
// {
//     int swap,n=7;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         int count = 0;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 count = 1;
//                 swap = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = swap;
//             }
//         }
//         if(count == 0)
//         {
//             break;
//         }
// //        printf("%d : ",i);
// //        for (int j=0;j<n;j++)
// //        {
// //            printf("%d ",arr[j]);
// //        }
// //        printf("\n");
//     }
//     printf("%d\n", arr[6]);
//     printf("%d", arr[5]);
// }

// #include <stdio.h>
// int arr[10]={};
// int main()
// {
//     int swap,n=7;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         int min=i;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[min]>arr[j])
//             {
//                 min = j;
//             }
//         }
//         swap = arr[min];
//         arr[min] = arr[i];
//         arr[i] = swap;
// //        if(count == 0)
// //        {
// //            break;
// //        }
// //        printf("%d : ",i);
// //        for (int j=0;j<n;j++)
// //        {
// //            printf("%d ",arr[j]);
// //        }
// //        printf("\n");
//     }
//     printf("%d\n", arr[6]);
//     printf("%d", arr[5]);
// }