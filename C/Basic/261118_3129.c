#include <stdio.h>
char stack[50001]={};
int top = -1;
void push(char data)
{
    stack[top++]=data;
}
char pop()
{
    
}
int main()
{
    char str[50001]={};
    scanf("%s", str);
    int a = 0;//카운트
    int b = 1;//괄호가 맞는지 확인
    for(int i=0;str[i]!='\0';i++)
    {
        
    }
    if(a==0&&b==1)
    {
        printf("good");
    }
    else
    {
        printf("bad");
    }
    return 0;
}