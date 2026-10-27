#include<stdio.h>
int main(){
    long long X,Y,Z;
    scanf("%lld %lld",&X,&Y);
    if(Y%X==0){
        Z=X+Y;
        printf("%lld",Z);
    }else{
        Z=Y-X;
        printf("%lld",Z);
    }
    return 0;
}