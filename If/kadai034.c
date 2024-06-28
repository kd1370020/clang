#include<stdio.h>
main() {
	char i;
	printf("アルファベット？");
	scanf("%c", &i);
	if (i <= 'a'&& i>='z') {
		printf("その文字は「小文字です」");
	}
	else if(i <= 'A'&&i>='Z') {
		printf("その文字は「大文字です」");
	}
	else {
		printf("ERROR");
	}
}