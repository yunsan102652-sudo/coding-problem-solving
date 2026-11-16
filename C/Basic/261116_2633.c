#include <stdio.h>
#include <stdlib.h>
int compare[100001]={};
int k;
int bs(int s, int e)
{
	if(s==e)
	{
		return s;
	}
	int mid=(s+e)/2;
	if(k<=compare[mid])
	{
		return bs(s,mid);
	}
	else
	{
		return bs(mid+1,e);
	}
}
int main()
{
	int n;
	scanf("%d %d", &n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &compare[i]);
	}
	if(compare[n-1]<k)
	{
	    printf("%d", n+1);
	}
	else
	{
	    printf("%d", bs(0,n-1)+1);
	}
	return 0;
}