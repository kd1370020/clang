#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main() {
	struct profile who;
	printf("���O�����:");
	gets(who.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d", &who.birth[0],&who.birth[1],&who.birth[2]);
	printf("���t�^�����:");
	scanf("%s",who.blood);
	printf("%s�[�[%d�N%d��%d���@���t�^�[%s�^", who.name, who.birth[0], who.birth[1], who.birth[2], who.blood);
}