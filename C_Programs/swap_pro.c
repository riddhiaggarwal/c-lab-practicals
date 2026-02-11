#include<stdio.h>
int main()
{
    int a,b;
    a=0;
    printf("give value");
    scanf("%d,&a");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d%d",a,b);
    return 0;

}