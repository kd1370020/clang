#include<stdio.h>
main() {
	char j;
	printf("アルファベット小文字");
	scanf("%c",&j);
	for(int i = 0;j + i <= 'z';i++) {
		printf(" %c", (j + i)-32);
	}
}