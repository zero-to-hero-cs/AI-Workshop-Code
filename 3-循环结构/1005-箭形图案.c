#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) != -1) {
       for(int i=1;i<=n+1;i++){
           for(int j=1;j<=2*(n-i+1);j++){
               printf(" ");
           }
           for(int k=1;k<=i;k++){
               printf("*");
           }
           printf("\n");
       }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=2*(n-i+1);j++){
                printf(" ");
            }
            for(int k=1;k<=i;k++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}