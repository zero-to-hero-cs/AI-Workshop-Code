#include <stdio.h>
int main() {
    int y, m, x;
    while (scanf("%d %d %d", &y, &m, &x) != EOF) {
        int days = 0;
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            days = 31;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {
            days = 30;
        } else if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
        }
        int count = 0;
        int year_count = 0;
        int temp_y = y;
        while (temp_y > 0) {
            if (temp_y % 10 == x) {
                year_count++;
            }
            temp_y =temp_y/10;
        }
        int month_count = 0;
        if (m / 10 == x) {
            month_count++;
        }
        if (m % 10 == x) {
            month_count++;
        }
        count=count+(year_count + month_count) * days;
        for (int d = 1; d <= days; d++) {
            if (d / 10 == x) {
                count++;
            }
            if (d % 10 == x) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}