#include <stdio.h>
#include <stdlib.h>
int arr[100001]={};
int n;
void shall(int arr[],int n)
{

}
int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    shall(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}