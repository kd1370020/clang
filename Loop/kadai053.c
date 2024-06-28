#include<stdio.h>
main() {
	int i;
	printf("®”");
	scanf("%d", &i);
	for(int j = i;j <= i + 10;j ++) {
		printf(" %d", j);
	}
}