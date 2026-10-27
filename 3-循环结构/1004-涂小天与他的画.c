#include<stdio.h>
int main() {
	int T, n;
	if (scanf("%d", &T) != EOF) {
		while (T--) {
			scanf("%d", &n);
			int row = (n + 1) / 2;
			for (int i = 1;i <= row;i++) {
				for (int j = 1;j <= row - i;j++) {
					printf(" ");
				}
				for (int j = 1;j <= 2 * i - 1;j++) {
					printf("*");
				}
				printf("\n");
			}
			for (int i = row - 1;i >= 1;i--) {
				for (int j = 1;j <= row - i;j++) {
					printf(" ");
				}
				for (int j = 1;j <= 2 * i - 1;j++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
    return 0;
}