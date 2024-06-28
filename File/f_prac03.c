#include<stdio.h>
#include<string.h>
typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}weapon;

typedef struct {
	char name[20];
	int hp;
	weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);


main() {
	Soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
	fclose(fp);
}
void Display(Soldier s) {
	printf("%s �̗�:%d\n ����:%s �e��:%d �U����:%f", s.name, s.hp, s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}