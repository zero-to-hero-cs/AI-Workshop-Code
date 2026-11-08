#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(int*)b-*(int*)a;
}
int main(){
    int day[100005];
    int night[100005];
    int diff[100005];
    int x,K;
    long long sum=0;
    scanf("%d %d",&x,&K);
    for(int i=0;i<x;i++){
        scanf("%d",&day[i]);
    }
    for(int i=0;i<x;i++){
        scanf("%d",&night[i]);
    }
    for(int i=0;i<x;i++){
        diff[i] = day[i] - night[i];
        sum=sum+night[i];
    }
    qsort(diff,x,sizeof(int),cmp);
    for(int i=0;i<K;i++){
        sum=sum+diff[i];
    }
    printf("%lld\n",sum);
}
