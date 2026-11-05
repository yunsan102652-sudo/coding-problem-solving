//#include <stdio.h>
//#include <stdlib.h>
//int n,m,x,y,qx,qy;
//int q[1000002][2]={};
//int arr[1002][1002]={};
//int visit[1002][1002]={};
//int dir[4][2]={{-1,0},{+1,0},{0,-1},{0,+1}};
//int front=-1;
//int rear=-1;
//int count=0;
//void push(int a, int b)
//{
//	rear++;
//	q[rear][0]=a;
//	q[rear][1]=b;
//}
//void pop()
//{
//	front++;
//	qx=q[front][0];
//	qy=q[front][1];
//}
//int bfs()
//{
//	push(1, 1);
//	visit[1][1]=1;
//	while(front < rear)
//	{
//		pop();
//		for(int k=0;k<4;k++)
//		{
//			int nx = qx+dir[k][0];
//			int ny = qy+dir[k][1];
//			if(nx>=1&&nx<=n&&ny>=1&&ny<=m)
//			{
//				if(visit[nx][ny]==0)
//				{
//					if(arr[qx][qy]==arr[nx][ny]||arr[qx][qy]+1==arr[nx][ny]||arr[qx][qy]-1==arr[nx][ny])
//					{
//						visit[nx][ny]=visit[qx][qy]+1;
//						push(nx, ny);
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	for(int i=1; i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	bfs();
//	printf("%d", visit[n][m]);
//	return 0;
//}
//토마토처럼 더 나은 방식으로 수정해서 풀기
#include <stdio.h>
#include <stdlib.h>
int n,m,h,qx,qy,qh;
int arr[1002][1002]={};
int q[1000002][3]={};
int visit[1002][1002]={};
int front=-1;
int rear=-1;
int count=0;
void push(int a, int b, int h)
{
	rear++;
	q[rear][0]=a;
	q[rear][1]=b;
	q[rear][2]=h;
}
void pop()
{
	front++;
	qx=q[front][0];
	qy=q[front][1];
	qh=q[front][2];
}
int bfs()
{
	push(1,1,);
	arr[1][1]=-arr[1][1];
	while(front < rear)
	{
		pop();
		for(int k=0;k<4;k++)
		{
			
		}
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	bfs();
	return 0;
}
