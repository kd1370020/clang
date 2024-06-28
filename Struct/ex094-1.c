#include <stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[40];
	struct day date;
	char blood[5];
};
main() {
	struct profile data[NIN] =
		{{"ヨシフ・スターリン",1878,12,18,"A"},
		{"ウラジーミル・レーニン",1870,4,10,"A"},
		{"ミハイル・ゴルバチョフ",1931,3,02,"O"},
		{"ゲオルギー・マレンコフ",1901,12,06,"AB"},
		{"ニキータ・フルシチョフ",1894,4,15,"A"}};
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s\t-- %d 年 %02d 月 %02d 日生 血液型-%s型\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}