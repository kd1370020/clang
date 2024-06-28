#include<stdio.h>
main() {
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	if (i <= 'a') {
		printf("その文字は「小文字です」");
	}
	else {
		printf("その文字は「大文字です」");
	}
}