#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main() {
	struct profile who[5];
	struct profile* p;
	int i;
	p = who;
	for (i = 0;i < 5;i++) {
		printf("%d人目(名前):", i+1);
		scanf("%s", &(p+i)->name);
		printf("%d人目(生年月日):", i+1);
		scanf("%d %d %d", &(p+i)->birth[0], &(p+i)->birth[1], &(p+i)->birth[2]);
		printf("%d人目(血液型)", i+1);
		scanf("%s", &(p+i)->blood);
	}
	for (i = 0;i < 5;i++) {
		if (strcmp("A", (p + i)->blood) == 0||strcmp("a",(p + i)->blood) == 0) {
			printf("%sーー%4d年%02d月%02d日生まれ　血液型ーA型\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2]);
		}
	}
}