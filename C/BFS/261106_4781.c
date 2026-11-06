//#include <stdio.h>
//#include <stdlib.h>
//int n,x,y,nx,ny,hx,hy,qx,qy;
//int front= -1;
//int rear= -1;
//int q[1000002][2]={};
//int dir[8][2]={{-2,+1},{-2,-1},{+1,-2},{+1,+2},{-1,-2},{-1,+2},{+2,-1},{+2,+1}};
//int arr[1002][1002]={};
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
//int bfs(int a, int b)
//{
//	push(a,b);
//	arr[a][b]=1;
//	while(front < rear)
//	{
//		pop();
//		for(int k=0;k<8;k++)
//		{
//			int nx = qx+dir[k][0];
//			int ny = qy+dir[k][1];
//			if(nx>=1&&nx<=n&&ny>=1&&ny<=n)
//			{
//				if(arr[nx][ny]==0)
//				{
//					arr[nx][ny]=arr[qx][qy]+1;
//					push(nx,ny);
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	scanf("%d %d", &x,&y);
//	scanf("%d %d", &hx, &hy);
//	bfs(x,y);
//	printf("%d", arr[hx][hy]-1);
//	return 0;
//}

//토마토 문제인데 전에 풀던 방식은 맵이 있을 때만 풀 수 있고,
//지금 푼 방식은 좌표를 가지고 할 경우에도 쓸 수 있어서 활용방법이 더 넓다.
//#include <stdio.h>
//#include <stdlib.h>
//int n,m,x,y,nx,ny,day=0;
//int front=-1;
//int rear=-1;
//int q[1000002][2]={};
//int arr[1002][1002]={};
//int dir[4][2]={{-1,0},{+1,0},{0,-1},{0,+1}};
//void push(int a, int b)
//{
//	rear++;
//	q[rear][0]=a;
//	q[rear][1]=b;
//	arr[a][b]=1;
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
//		int max = rear;
//		for(int i=front+1;i<=max;i++)
//		{
//			pop();
//			for(int k=0;k<4;k++)
//			{
//				int nx = x+dir[k][0];
//				int ny = y+dir[k][1];
//				if(nx>=1&&nx<=n&&ny>=1&&ny<=m)
//				{
//					if(arr[nx][ny]==0)
//					{
//						push(nx, ny);
//					}
//				}
//			}
//		}
//		day++;
//	}
//}
//int main()
//{
//	scanf("%d %d", &m, &n);
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
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if(arr[i][j]==0)
//			{
//				printf("-1");
//				return 0;
//			}
//		}
//	}
//	printf("%d", day-1);
//	return 0;
//}
