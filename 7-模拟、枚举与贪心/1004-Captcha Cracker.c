#include<stdio.h>
#include <string.h>
int main(){
    int T;
    char s[100006];
    scanf("%d",&T);
    while(T--){
        scanf("%s",s);
        for(int i=0; s[i] != '\0'; i++){
            if(s[i]-'0'==0||s[i]-'0'==2||s[i]-'0'==4||s[i]-'0'==6||s[i]-'0'==9){
                int num=s[i]-'0';
                printf("%d",num);
            }
            if(strncmp(&s[i], "zero", 4) == 0){
                printf("0");
                i=i+3;
            }
            if(strncmp(&s[i], "two", 3) == 0){
                printf("2");
                i=i+2;
            }
            if(strncmp(&s[i], "four", 4) == 0){
                printf("4");
                i=i+3;
            }
            if(strncmp(&s[i], "six", 3) == 0){
                printf("6");
                i=i+2;
            }
            if(strncmp(&s[i], "nine", 4) == 0){
                printf("9");
                i=i+3;
            }
        }
        printf("\n");
    }
}