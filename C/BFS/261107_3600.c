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