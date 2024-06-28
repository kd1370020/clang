#include<stdio.h>
main() {
	int i = 0;
	char data1[256];
	char data2[256];
	printf("(コピー元) 配列 data1[] = ");
	scanf("%s", &data1);
	do {
		data2[i] = data1[i];
		i++;
	} while (data1[i] != '\0');
	data2[i] = data1[i];
	printf("(コピー先) 配列 data2[] = %s", data2);
}