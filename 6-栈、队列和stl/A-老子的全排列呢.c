#include<stdio.h>
int ans[9];
int used[9];
void dfs(int step){
    if(step==8){
        for(int i=0;i<8;i++){
            if(i>0){
                printf(" ");
            }
            printf("%d",ans[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=8;i++){
        if(used[i]==0){
            ans[step]=i;
            used[i]=1;
            dfs(step+1);
            used[i]=0;
        }
    }
}
int main(){
    dfs(0);
}