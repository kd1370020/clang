#include<stdio.h>
main() {
	int i;
	do{
		printf("文字コード(-1で入力終了)");
		scanf("%d", &i);
		printf("%c\n",i );
	} while (i != -1);
}