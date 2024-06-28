#include<stdio.h>
main() {
	FILE* fp;
	char str[256],equip[256];
	int i,lv,hp;
	fp = fopen("file01.txt", "r");
	//for (i = 0;i < 3;i++) {
	//	fscanf(fp, "%s", str);
	//	printf("%s\n", str);
	//}
	//fscanf(fp, "%d%d%s", &lv, &hp, equip);
	fgets(equip, sizeof(equip), fp);
	//printf("lv: %d hp: %d ‘•”õ: %s", lv, hp, equip);
	printf("%s", equip);
	fclose(fp);
}