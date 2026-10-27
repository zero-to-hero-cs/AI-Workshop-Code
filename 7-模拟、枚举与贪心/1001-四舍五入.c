#include <stdio.h>
#include <string.h>
int main() {
    char s[200005];
    int n, t;
    scanf("%d %d", &n, &t);
    scanf("%s", s);
    int dot = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            dot = i;
            break;
        }
    }
    int pos = -1;
    for (int i = dot + 1; i < n && dot != -1; i++) {
        if (s[i] >= '5') {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        while (t > 0 && pos >= 0) { 
            s[pos] = '\0'; 
            pos--;         
            if (pos == dot) {
                pos--;
                dot = -1;
            }
            while (pos >= 0 && s[pos] == '9') {
                s[pos] = '0';
                pos--;
                if (pos >= 0 && s[pos] == '.') {
                    pos--;
                    dot = -1;
                }
            }

            if (pos >= 0) {
                s[pos]++;
                t--;
                if (dot == -1 || s[pos] < '5') {
                    break;
                }
            } else {
                int len = strlen(s);
                for (int i = len; i >= 0; i--) {
                    s[i + 1] = s[i];
                }
                s[0] = '1';
                break;
            }
        }
    }
    if (strchr(s, '.') != NULL) {
        int i = strlen(s) - 1;
        while (i >= 0 && s[i] == '0') {
            i--;
        }
        if (i >= 0 && s[i] == '.') {
            i--;
        }
        s[i + 1] = '\0';
    }
    printf("%s\n", s);
    return 0;
}