//#include <stdio.h>
//#include <stdlib.h>
//int n,x,y,count;
//int arr[101][101]={};
//int q[10001][2]={};
//int front=-1;
//int rear=-1;
//int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
//void push(int a, int b, int count)
//{
//	rear++;
//	q[rear][0]=a;
//	q[rear][1]=b;
//	arr[a][b]=count;
//}
//int pop()
//{
//	front++;
//	x=q[front][0];
//	y=q[front][1];
//}
//
////void view()
////{
////	for(int i=0;i<n;i++)
////	{
////		for(int j=0;j<n;j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////	printf("\n");
////}
//int bfs(int a, int b)
//{
//	push(a,b,1);
//	while(front < rear)
//	{
//		pop();
//		for(int i=0;i<4;i++)
//		{
//			int nx=x+dir[i][0];
//			int ny=y+dir[i][1];
//			if(nx>=0&&nx<n&&ny>=0&&ny<n)
//			{
//				if(arr[nx][ny]==0)
//				{
//					push(nx,ny,arr[x][y]+1);
//				}
//			}
//		}
////		view();
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	scanf("%d %d", &x,&y);
//	int e=x;
//	int r=y;
//	bfs(e-1,r-1);
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int m,n,x,y,px,py;
int arr[1002][1002]={};
int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
int q[1000001][2]={};
int front=-1;
int rear=-1;
void push(int a, int b)
{
	rear++;
	q[rear][0]=a;
	q[rear][1]=b;
}
void pop()
{
	front++;
	x=q[front][0];
	y=q[front][1];
}
int bfs()
{
	while(front < rear)
	{
		pop();
		for(int k=0;k<4;k++)
		{
			int nx = x+dir[k][0];
			int ny = y+dir[k][1];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=m)
			{
				if(arr[nx][ny]==0)
				{
					arr[nx][ny]=arr[x][y]+1;
					push(nx, ny);
				}
			}
		}
	}
}
int main()
{
	scanf("%d %d", &m,&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][j]==1)
			{
				push(i,j);
			}
		}
	}
	bfs();
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(arr[i][j]==0)
			{
				printf("-1");
				return 0;
			}
			if(arr[i][j]>count)
			{
				count = arr[i][j];
			}
		}
	}	
	printf("%d", count-1);
	return 0;
}