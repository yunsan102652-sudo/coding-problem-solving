#include <stdio.h>
#include <stdlib.h>
int arr[500001]={};
int str[500001]={};
int bs(int k, int s, int e)
{
    if(s == e)
    {
        return s;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k)
    {
        return mid;
    }
    else if(k < arr[mid])
    {
        return bs(k,s,mid-1);
    }
    else
    {
        return bs(k,mid+1,e);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        str[i] = arr[i];
    }
    return 0;
}