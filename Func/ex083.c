#include<stdio.h>
int strcnt(char* p);
main() {
	char buf[256];
	printf("文字列?:");
	scanf("%s", &buf);
	printf("入力された文字列の文字数は%dです。", strcnt(buf));
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0;*p != '\0';cnt++,p++) {
	}
	return(cnt);
}