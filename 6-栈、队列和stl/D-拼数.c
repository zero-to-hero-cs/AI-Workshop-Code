#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    char *s1=(char*)a;
    char *s2=(char*)b;
    char temp1[200]={0};
    char temp2[200]={0};
    strcpy(temp1,s1);
    strcat(temp1,s2);
    strcpy(temp2,s2);
    strcat(temp2,s1);
    if(strcmp(temp1,temp2)>0){
        return -1;
    }else{
        return 1;
    }
}
int main(){
    int n;
    char str[20][60];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    qsort(str,n,sizeof(str[0]),cmp);
    for(int i=0;i<n;i++){
        printf("%s",str[i]);
    }
}