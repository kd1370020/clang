#include<stdio.h>
main() {
	char i;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &i);
	if (i <= 'a'&& i>='z') {
		printf("%c",i-32);
	}
	else if(i <= 'A'&&i>='Z') {
		printf("%c",i + 32);
	}
	else {
		printf("%c",i);
	}
}