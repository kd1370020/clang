#include<stdio.h>
main() {
	int i = 0;
	char data1[256];
	printf("文字列は？");
	scanf("%s", &data1);
	do {
		i++;
	} while (data1[i] != '\0');
	printf("\n文字列 = %s\t文字数 = %d 文字",data1, i);
}