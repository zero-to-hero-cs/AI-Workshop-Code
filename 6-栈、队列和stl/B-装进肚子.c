#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(int*)b-*(int*)a;
}
int main(){
    int day[100006];
    int night[100006];
    int diff[100006];
    int n,K;
    long long sum=0;
    scanf("%d %d",&n,&K);
    for(int i=0;i<n;i++){
        scanf("%d",&day[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&night[i]);
    }
    for(int i=0;i<n;i++){
        diff[i] = day[i] - night[i];
        sum=sum+night[i];
    }
    qsort(diff,n,sizeof(int),cmp);
    for(int i=0;i<K;i++){
        sum=sum+diff[i];
    }
    printf("%lld\n",sum);
}