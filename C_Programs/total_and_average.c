#include<stdio.h>
int main()
{
    int sum,average,m1,m2,m3,m4,m5;
    printf("give marks of 5 subjects");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    average=sum/5;
    printf("sum is %d",sum);
    printf("\naverage is %d",average);
    
}