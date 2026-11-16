// #include <stdio.h>
// #include <stdlib.h>
// int arr[1000001]={};
// int compare[100001]={};
// int bs(int s, int e, int k)
// {
// 	int mid=(s+e)/2;
// 	if(k<arr[mid+1]&&k>arr[mid])
// 	{
// 		return -2;
// 	}
// 	if(arr[mid]==k)
// 		return mid;
// 	else if(arr[mid]>k)
// 	{
// 		return bs(s,mid-1,k);
// 	}
// 	else if(k>arr[mid])
// 	{
// 		return bs(mid+1,e,k);
// 	}
// }
// int main()
// {
// 	int n,m;
// 	scanf("%d", &n);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d", &arr[i]);
// 	}
// 	scanf("%d", &m);
// 	for(int i=0;i<m;i++)
// 	{
// 		scanf("%d", &compare[i]);
// 		printf("%d ", bs(0,n-1,compare[i])+1);
// 	}
// 	return 0;
// }