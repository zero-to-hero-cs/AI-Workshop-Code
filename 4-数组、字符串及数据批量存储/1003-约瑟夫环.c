#include<stdio.h>
int main(){
    int n,k,m;
    int count=0;
    int a[105];
    scanf("%d %d %d",&n,&k,&m);
    int remain=n;
    int x=k;
    for(int i=0;i<n;i++){
        a[i]=1;
    }
    while(remain>1){
        if(a[x]==1){
           count++;
            if(count==m){
                a[x]=0;
                remain--;
                count=0;
            }
        }
        x=(x+1)%n;
    }
    for(int j=0;j<n;j++){
        if(a[j]==1){
            printf("%d",j);
            break;
        }
    }
}