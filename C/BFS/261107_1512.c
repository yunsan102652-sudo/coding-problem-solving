//#include <stdio.h>
//#include <stdlib.h>
//int m,n,x,y,px,py;
//int arr[1002][1002]={};
//int dir[4][2]={{+1,0},{-1,0},{0,+1},{0,-1}};
//int q[1000001][2]={};
//int front=-1;
//int rear=-1;
//void push(int a, int b)
//{
//	rear++;
//	q[rear][0]=a;
//	q[rear][1]=b;
//}
//void pop()
//{
//	front++;
//	x=q[front][0];
//	y=q[front][1];
//}
//int bfs()
//{
//	while(front < rear)
//	{
//		pop();
//		for(int k=0;k<4;k++)
//		{
//			int nx = x+dir[k][0];
//			int ny = y+dir[k][1];
//			if(nx>=1&&nx<=n&&ny>=1&&ny<=m)
//			{
//				if(arr[nx][ny]==0)
//				{
//					arr[nx][ny]=arr[x][y]+1;
//					push(nx, ny);
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d", &m,&n);
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if(arr[i][j]==1)
//			{
//				push(i,j);
//			}
//		}
//	}
//	bfs();
//	int count=0;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if(arr[i][j]==0)
//			{
//				printf("-1");
//				return 0;
//			}
//			if(arr[i][j]>count)
//			{
//				count = arr[i][j];
//			}
//		}
//	}	
//	printf("%d", count-1);
//	return 0;
//}