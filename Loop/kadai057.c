#include<stdio.h>
main() {
	char j;
	printf("�A���t�@�x�b�g������");
	scanf("%c",&j);
	for(int i = 0;j + i <= 'z';i++) {
		printf(" %c", (j + i)-32);
	}
}