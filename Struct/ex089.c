#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main() {
	struct profile who;
	printf("名前を入力:");
	gets(who.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d %d %d", &who.birth[0],&who.birth[1],&who.birth[2]);
	printf("血液型を入力:");
	scanf("%s",who.blood);
	printf("%sーー%d年%d月%d日　血液型ー%s型", who.name, who.birth[0], who.birth[1], who.birth[2], who.blood);
}