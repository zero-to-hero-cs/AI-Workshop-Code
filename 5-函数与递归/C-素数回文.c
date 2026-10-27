#include <stdio.h>
int main() {
    long long t;
    scanf("%lld", &t);
    long long sum = 0;
    int count = 0;
    long long temp = t / 10;

    while (temp > 0) {
        int a = temp % 10;
        sum = sum * 10 + a;
        temp = temp / 10;
        count++;
    }
    for (int i = 0; i < count; i++) {
        t = t * 10;
    }
    t = t + sum; 
    int isPrime = 1; 
    if (t % 2 == 0 || t % 5 == 0) {
        isPrime = 0;
    } else {
        for (long long i = 3; i * i <= t; i += 2) {
            if (t % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        printf("prime\n");
    } else {
        printf("noprime\n");
    }
}