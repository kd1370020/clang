#include<stdio.h>
#include<string.h>
struct syohin_date {
	char name[20];
	int tanka;
	int kosuu;
};

main() {
	struct syohin_date syohin[3] = { {"エンピツ",30,5},
									{"ケシゴム",50,2},
									{"フデバコ",500,3} };
	struct syohin_date * p;
	int i;
	p = &syohin[0];
	for (i = 0;i < 3;i++) {
		printf("商品名: %s\t", (p+i)->name);
		printf("単価: %4d\t", (p+i)->tanka);
		printf("個数: %4d\t", (p+i)->kosuu);
		printf("金額: \\%d\n", (p + i)->tanka * (p + i)->kosuu);
	}
}