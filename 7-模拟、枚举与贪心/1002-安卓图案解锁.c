#include <stdio.h>
#include <string.h>
#include <math.h> 
int main() {
    char s[35];
    while (scanf("%s", s) != EOF) {
        int len = strlen(s);
        int vis[10] = {0}; 
        int is_valid = 1;  
        for (int i = 0; i < len; i++) {
            int curr = s[i] - '0'; 
            if (vis[curr] == 1) {
                is_valid = 0;
                break;
            }
            if (i > 0) {
                int pre = s[i - 1] - '0'; 
                int r1 = (pre - 1) / 3;
                int c1 = (pre - 1) % 3;
                int r2 = (curr - 1) / 3;
                int c2 = (curr - 1) % 3;
                if ((abs(r1 - r2) == 2 && c1 == c2) || 
                    (abs(c1 - c2) == 2 && r1 == r2) || 
                    (abs(r1 - r2) == 2 && abs(c1 - c2) == 2)) {
                    int mid = (pre + curr) / 2; 
                    if (vis[mid] == 0) { 
                        is_valid = 0;
                        break;
                    }
                }
            }
            vis[curr] = 1; 
        }
        if (is_valid == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}