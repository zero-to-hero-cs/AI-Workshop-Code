#include<stdio.h>
#include<string.h>
int main(){
    char s[100005];
    int cnt=0;
    scanf("%s",s);
    for (int i = 0; s[i] != '\0'; i++){
        if(s[i]=='a'){
            cnt++;
        }else{
            cnt--;
        }
        if(cnt<0){
            printf("Bad\n");
            return 0;
        }
    }
    if(cnt==0){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }
}