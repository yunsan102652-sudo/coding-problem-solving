//  #include <stdio.h>
//  int stack[100001]={};
//  int top=-1;
//  void push(int data)
//  {
//      top++;
//      stack[top] = data;
//  }
//  int pop()
//  {
//      if(top>-1)
//      {
//          top--;
//          return stack[top+1];
//      }
//  }
//  int main()//k에서 몇 줄 받을 것인지, n에서 pop할건지 push할건지
//  {
//      int k,n;
//      int sum = 0;
//      scanf("%d", &k);
//      for(int i=0;i<k;i++)
//      {
//          scanf("%d", &n);
//          if(n==0)
//          {
//              pop();
//          }
//          else
//          {
//              push(n);
//          }
//      }
//      for(int i=0; i<=top; i++)
// 	 {
// 	 	sum += stack[i];
// 	 }
// 	 printf("%d", sum);
// 	 return 0;
//  }