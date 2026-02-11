#include<stdio.h>
int main(){
    int a=128;
    int b=-122;
    printf("%d",sizeof(a));
    printf("\n%d",a>>2);
    printf("\n%d",a<<1);
    printf("\n%d",sizeof(8.9));
    printf("\n%d",sizeof(8.9f));   
    if(printf("\nTrue")){
        printf("\nyes");
    }
    else{
        printf("\nno");
    }
    if("true"){
        printf("\nyes");
    }
    else{
        printf("\nno");
    } 
    if(1)
        printf("\ntrue");
       printf("\nagain true");
        return 0;
}

