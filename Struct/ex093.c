#include<stdio.h>
#include<string.h>
struct syohin_date {
	char name[20];
	int tanka;
	int kosuu;
};

main() {
	struct syohin_date syohin[3] = { {"�G���s�c",30,5},
									{"�P�V�S��",50,2},
									{"�t�f�o�R",500,3} };
	struct syohin_date * p;
	int i;
	p = &syohin[0];
	for (i = 0;i < 3;i++) {
		printf("���i��: %s\t", (p+i)->name);
		printf("�P��: %4d\t", (p+i)->tanka);
		printf("��: %4d\t", (p+i)->kosuu);
		printf("���z: \\%d\n", (p + i)->tanka * (p + i)->kosuu);
	}
}