#include<stdio.h>
main() {
	int i,j;
	char data[256];
	printf("�񐔂ƕ���������");
	scanf("%d %s", &i, &data);
	for (j = 0;j < i;j++) {
		printf("%s ", data);
	}
}