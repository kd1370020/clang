#include<stdio.h>
main() {
	char i;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &i);
	if (i <= 'a'&& i>='z') {
		printf("���̕����́u�������ł��v");
	}
	else if(i <= 'A'&&i>='Z') {
		printf("���̕����́u�啶���ł��v");
	}
	else {
		printf("ERROR");
	}
}