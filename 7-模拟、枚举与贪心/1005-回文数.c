#include <stdio.h>
int main() {
    long long a[10];
    long long sum = 0;
    int odd_cnt = 0;
    int mid_num = -1;
    for (int i = 0; i < 10; i++) {
        scanf("%lld", &a[i]);
        sum += a[i];
        if (a[i] % 2 != 0) {
            odd_cnt++;
            mid_num = i;
        }
    }
    if (sum == 0 || odd_cnt > 1) {
        printf("-1\n");
        return 0;
    }
    if (sum == 1) {
        printf("%d\n", mid_num);
        return 0;
    }
    int first_num = -1;
    for (int i = 1; i <= 9; i++) {
        if (a[i] >= 2) {
            first_num = i;
            a[i] -= 2;
            break;
        }
    }
    if (first_num == -1) {
        printf("-1\n");
        return 0;
    }
    printf("%d", first_num);
    for (int i = 0; i < 10; i++) {
        long long half = a[i] / 2;
        for (long long j = 0; j < half; j++) {
            printf("%d", i);
        }
    }
    if (mid_num != -1) {
        printf("%d", mid_num);
    }
    for (int i = 9; i >= 0; i--) {
        long long half = a[i] / 2;
        for (long long j = 0; j < half; j++) {
            printf("%d", i);
        }
    }
    printf("%d\n", first_num);
    return 0;
}