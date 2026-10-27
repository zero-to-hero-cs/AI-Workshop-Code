#include<stdio.h>
int main(){
    int x,y;
    int count=0;
    scanf("%d %d",&x,&y);
    for(int i=x;i<y+1;i++){
        int temp=i;
        int sum=0;
        while(temp>0){
            int a=temp%10;
            sum=sum+a;
            temp=temp/10;
        }
        if(sum%5==0){
            count++;
        }
    }
    printf("%d",count);
}