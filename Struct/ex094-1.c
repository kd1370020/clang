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
		{{"���V�t�E�X�^�[����",1878,12,18,"A"},
		{"�E���W�[�~���E���[�j��",1870,4,10,"A"},
		{"�~�n�C���E�S���o�`���t",1931,3,02,"O"},
		{"�Q�I���M�[�E�}�����R�t",1901,12,06,"AB"},
		{"�j�L�[�^�E�t���V�`���t",1894,4,15,"A"}};
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s\t-- %d �N %02d �� %02d ���� ���t�^-%s�^\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}