//#include <stdio.h>
//#include <stdlib.h>
//int n,k,m,x;
//int arr[100002]={};
//int q[100002]={};
//int hade[100002]={};
//int pra[100002]={};
//int front=-1;
//int rear=-1;
//int count=0;
//char code[100002][31]={};
//void push(int a)
//{
//	rear++;
//	q[rear]=a;
//}
//void pop()
//{
//	front++;
//	x=q[front];
//}
//int bfs()
//{
//	push();
//	while(front < rear)
//	{
//		int max=rear;
//		for(int i=front+1;i<=max;i++)
//		{
//			pop();
//			
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d", &n, &k);
//	for(int i=1;i<=n;i++)
//	{
//		
//	}
//	bfs();
//	
//	return 0;
//}

// #include <stdio.h>
// #include <stdlib.h>
// int n,k,m,x;
// int front=-1;
// int rear=-1;
// int q[100002]={};
// int arr[100002]={};
// void push(int a)
// {
// 	rear++;
// 	q[rear]=a;
// }
// void pop()
// {
// 	//비어있을 때는 호출하지 않도록 한다.
// 	front++;
// 	x=q[front];
// }
// int bfs(int a)
// {
// 	while(front < rear)
// 	{
		
// 	}
// }
// int main()
// {
// 	scanf("%d %d", &n,&k);
// 	for(int i=1;i<=n;i++)
// 	{
// 		scanf("%d", &arr[i]);
// 	}
// 	bfs();
// 	return 0;
// }

//#include <stdio.h>
//#include <stdlib.h>
//int n,k,m,x,a,b;
//int front=-1;
//int rear=-1;
//int q[100002]={};
//int code[100002]={};
//int path[100002]={};
//int parent[100002]={};
//char s[35]={};
//void push(int a)
//{
//	rear++;
//	q[rear]=a;
//}
//void pop()
//{
//	front++;
//	x=q[front];
//}
//int bfs(int a, int b)
//{
//	front=-1;
//	rear=-1;
//	for(int i=1;i<=n;i++)
//	{
//		parent[i]=-1;
//	}
//	push(a);
//	parent[a]=0;
//	while(front < rear)
//	{
//		int max=rear;
//		for(int i=front+1;i<=max;i++)
//		{
//			pop();
//			if(x==b)//bfs종료해야할때
//			{
//				return 1;
//			}
//			for(int j=1;j<=n;j++)
//			{
//				if(parent[j]==-1)
//				{
//					int temp = code[j] ^ code[x];
//					int count=0;
//					while(temp > 0)
//					{
//						if(temp%2==1)
//						{
//							count++;
//						}
//						temp=temp/2;
//					}
//					if(count==1)
//					{
//						parent[j]=x;
//						push(j);
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d %d", &n, &k);
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%s", s);
//		code[i]=strtol(s, NULL, 2);
//	}
//	scanf("%d", &m);
//	for(int i=0;i<m;i++)
//	{
//		scanf("%d", &b);
//		if(bfs(a,b))
//		{
//			int count=0;
//			int now=b;
//			while(now!=0)
//			{
//				path[count]=now;
//				count++;
//				now=parent[now];
//			}
//			for(int j=count-1;j>=0;j--)
//			{
//				printf("%d ", path[j]);
//			}
//			printf("\n");
//		}
//		else
//		{
//			printf("-1\n");
//		}
//	}
//	return 0;
//}
