// #include <stdio.h>
// #include <stdlib.h>
// int compare[1000001]={};
// int k;
// int bs(int s, int e)
// {
//     if(s>e)
//     {
//         return -1;
//     }
//     int mid = (s+e)/2;
//     if(compare[mid]==k)
//     {
//         return mid+1;
//     }
//     else if(k<compare[mid])
//     {
//         return bs(s,mid-1);
//     }
//     else if(k>compare[mid])
//     {
//         return bs(mid+1,e);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d %d", &n, &k);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &compare[i]);
//     }
//     printf("%d", bs(0,n-1));
//     return 0;
// }