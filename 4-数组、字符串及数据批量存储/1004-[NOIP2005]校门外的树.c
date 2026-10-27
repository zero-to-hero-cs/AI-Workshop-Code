#include<stdio.h>
int main(){
    int L,M,x,y;
    int count=0;
    int tree[10002];
    scanf("%d %d",&L,&M);
    for(int i=0;i<=L;i++){
        tree[i]=1;
    }
    for(int i=0;i<M;i++){
        scanf("%d %d",&x,&y);
        for(int j=x;j<=y;j++){
            tree[j]=0;
        }
    }
    for(int i=0;i<=L;i++){
        if(tree[i]==1){
            count++;
        }
    }
    printf("%d",count);
}