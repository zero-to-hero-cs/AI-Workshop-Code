#include<stdio.h>
int main(){
    int total;
    int a[100];
    scanf("%d",&total);
    for(int i=0;i<total;i++){
        scanf("%d",&a[i]);
    }
    if(total==1){
        if(a[0]==0){
            printf("UP");
        }else if (a[0] == 15) {
            printf("DOWN\n");
        } else {
            printf("-1\n");
        }
    }else{
        int last = a[total - 1];      
        int prev = a[total - 2];      
        if(last == 15){
            printf("UP");
        }else if(prev>last){
            printf("DOWN");
        }else{
            printf("UP");
        }
    }
}