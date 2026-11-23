// #include <stdio.h>
// int stack[1001]={};
// int top = -1;
// void push(int data)
// {
//     top++;
//     stack[top]= data;
// }
// int pop()
// {
//     // isempty?
//     if(top>-1) //스택에 뭔가 있으면
//     {
//         top--;
//         return stack[top+1];
//     }
// }
// int main()
// {
//     int n,i, k;
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &k);
//         push(k);
//     }
//     while(top!=-1)
//     {
//         printf("%d ", pop());
//     }
// }