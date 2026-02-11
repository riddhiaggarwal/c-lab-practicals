#include<stdio.h>
int main()
{
    int rev=0,rem,num,sum=0;
    printf("give any number");
    scanf("%d",&num);
    while (num>0){
        rem=num%10;
        rev=rev*10+rem;
        sum=sum+rem;
        num=num/10;
    }
    printf("reverse of number is = %d",rev);
    printf("\nsum of digits is = %d",sum);
    return 0;
}