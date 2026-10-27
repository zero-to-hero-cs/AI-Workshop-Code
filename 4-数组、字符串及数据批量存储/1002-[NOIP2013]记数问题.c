#include<stdio.h>
int main(){
    int n,x,a;
    scanf("%d %d",&n,&x);
    int count=0;
    for(int i=1;i<n+1;i++){
        int temp=i;
        while(temp!=0){
            a=temp%10;
            if(a==x){
                count++;
            }
            temp=temp/10;
        }
    }
    printf("%d",count);
}