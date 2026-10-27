#include<stdio.h>
int main(){
    int state=0;
    int c;
    char buf[10005];
    int idx = 0;
    while ((c = getchar()) != EOF){
        if (state == 0){
            if (c == '\\') {
                putchar(c);
                int next = getchar();
                if (next == '"') {
                    putchar(next); 
                } else {
                    if (next != EOF) ungetc(next, stdin); 
                }
            }
            else if(c=='"'){
                putchar('"');
                state=1;
            }else if (c == '/'){
                int next_c=getchar();
                if(next_c=='*'){
                    idx = 0;
                    buf[0]='/';
                    buf[1]='*';
                    idx=2;
                    state = 2;
                }else{
                    putchar('/');
                    if (next_c != EOF) {
                        ungetc(next_c,stdin);
                    }
                }
            }else{
                putchar(c);
            }
        }else if(state==1){
            if(c=='\\'){
                putchar(c);
                int temp=getchar();
                if (temp != EOF) { 
                    putchar(temp);
                }
            }else if(c=='"'){
                putchar(c);
                state=0;
            }else{
                putchar(c);
            }
        }else if(state == 2){
            if(c=='*'){
                int next=getchar();
                if(next=='/'){
                    state=0;
                }else{
                    buf[idx++] = '*';
                    if(next!=EOF){
                        ungetc(next,stdin);
                    }
                }
            }else{
                buf[idx++] = c;
            }
        }
    }
    if(state==2){
        for(int i=0;i<idx;i++){
            putchar(buf[i]);
        }
    }
}