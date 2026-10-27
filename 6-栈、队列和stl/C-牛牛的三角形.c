#include<stdio.h>
int main(){
    int n;
    int sides[103];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&sides[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int x=0;x<n;x++){
                 if (i != j && i != x && j != x){
                    int side_1=sides[i];
                    int side_2=sides[j];
                    int side_3=sides[x];
                    if ((long long)side_1 + side_2 > side_3 && 
                        (long long)side_1 + side_3 > side_2 && 
                        (long long)side_2 + side_3 > side_1){
                        printf("%d %d %d",side_1,side_2,side_3);
                        return 0;
                    }
                }
            }
        }
    }
    printf("No solution");
}