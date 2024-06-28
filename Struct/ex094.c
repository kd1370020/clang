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
		printf("%dl–Ú(–¼‘O):", i+1);
		scanf("%s", &(p+i)->name);
		printf("%dl–Ú(¶”NŒŽ“ú):", i+1);
		scanf("%d %d %d", &(p+i)->birth[0], &(p+i)->birth[1], &(p+i)->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^)", i+1);
		scanf("%s", &(p+i)->blood);
	}
	for (i = 0;i < 5;i++) {
		if (strcmp("A", (p + i)->blood) == 0||strcmp("a",(p + i)->blood) == 0) {
			printf("%s[[%4d”N%02dŒŽ%02d“ú¶‚Ü‚ê@ŒŒ‰tŒ^[AŒ^\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2]);
		}
	}
}