#include<stdio.h>
main() {
	int i,j;
	char data[256];
	printf("回数と文字列を入力");
	scanf("%d %s", &i, &data);
	for (j = 0;j < i;j++) {
		printf("%s ", data);
	}
}