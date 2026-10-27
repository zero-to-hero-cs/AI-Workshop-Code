#include<stdio.h>
int main() {
    int height;
    int num = 1;
    int element = 1;
    scanf("%d", &height);
    for (int i = 0;i < height;i++) {
        int count = 0;
        while (count != element) {
            printf("%4d", num);
            num++;
            count++;
        }
        printf("\n");
        element++;
    }
}