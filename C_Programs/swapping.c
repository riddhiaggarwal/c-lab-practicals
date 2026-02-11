#include<stdio.h>
int main()
{
    int a,b,store;
    printf("give two values");
    scanf("%d%d",&a,&b);
    printf("a=%d",a);
    printf("\nb=%d",b);
    store=a;
    a=b;
    b=store;
    printf("\n After swapping........");
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return 0;

}