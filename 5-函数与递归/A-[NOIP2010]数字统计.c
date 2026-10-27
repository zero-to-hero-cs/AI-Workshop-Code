#include<stdio.h>
int statistics(int l,int r,int count){
    int a;
    for(int i=l;i<r+1;i++){
        int temp=i;
        while(temp!=0){
            a=temp%10;
            if(a==2){
                count++;
            }
            temp=temp/10;
        }
    }
    return count;
}
int main(){
    int L,R;
    scanf("%d %d",&L,&R);
    int count=0;
    count=statistics(L,R,count);
    printf("%d",count);
}