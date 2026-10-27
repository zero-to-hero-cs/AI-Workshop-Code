#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("%d",a/2);
    }else{
        printf("%d",3*a+1);
    }
    return 0;
}