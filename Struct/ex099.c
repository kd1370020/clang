#include<stdio.h>
#include<string.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};

main() {
	struct ken	ken_data[] = {
	{1,"�k�C��",NULL},
	{2,"�X��",NULL},
	{3,"��茧",NULL},
	{4,"�{�錧",NULL},
	{5,"�H�c��",NULL},
	{6,"�R�`��",NULL},
	{7,"������",NULL},
	{DATA_END,"",NULL}
	};
	struct ken* p, * wp;
	struct ken hyogo_data[] = { 28,"���Ɍ�",NULL };

	//�����N�̐ݒ�
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//�����N�̕\��
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	//�}��
	ken_data[0].next = hyogo_data;
	hyogo_data->next = &ken_data[1];

	printf("\n-------------------------\n");
	//�f�[�^�}���ナ���N�̕\��
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
	//�폜
	ken_data[1].next = &ken_data[3];
	ken_data[4].next = &ken_data[6];
	printf("\n-------------------------\n");
	//�f�[�^�폜��
	for (p = ken_data;p->code != DATA_END;p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);;
	}
}