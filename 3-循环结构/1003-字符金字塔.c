#include<stdio.h>
int main() {
	char ch;
	scanf("%c", &ch);
	int height = ch - 'A' + 1;
	for (int i = 1;i <= height;i++) {
		for (int j = 1;j <= height - i;j++) {
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("%c", 'A' + j);
		}
		for (int j = i - 2; j >= 0; j--) {
			printf("%c", 'A' + j);
		}
		printf("\n");
	}
}