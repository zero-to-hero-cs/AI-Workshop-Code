#include <stdio.h>
#include <string.h>
int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        char A[60], B[60];
        scanf("%s %s", A, B);
        int lenA = strlen(A);
        int lenB = strlen(B);
        int result[110] = {0}; 
        for (int i = lenA - 1; i >= 0; i--) {
            for (int j = lenB - 1; j >= 0; j--) {
                int numA = A[i] - '0'; 
                int numB = B[j] - '0';
                result[i + j + 1] += numA * numB; 
            }
        }
        for (int k = lenA + lenB - 1; k > 0; k--) {
            if (result[k] >= 10) {
                result[k - 1] += result[k] / 10; 
                result[k] = result[k] % 10;      
            }
        }
        int start = 0;
        if (result[0] == 0) start = 1; 
        
        for (int k = start; k < lenA + lenB; k++) {
            printf("%d", result[k]);
        }
        printf("\n");
    }
}