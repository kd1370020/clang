#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)>");
	scanf("%d", &p);
	srand(time(0));
	rand();
	c = rand() % 3;
	switch(p){
	case 1:printf("�v���C���[�́A�O�[�ł�\n");
		break;
	case 2:printf("�v���C���[�́A�`���L�ł�\n");
		break;
	case 3:printf("�v���C���[�́A�p�[�ł�\n");
		break;
	default: printf("1�`3����͂��Ă�������\n");
	};
	switch (c) {
	case 0:printf("�R���s���[�^�A�̓O�[�ł�\n");
		break;
	case 1:printf("�R���s���[�^�́A�`���L�ł�\n");
		break;
	case 2:printf("�R���s���[�^�́A�p�[�ł�\n");
		break;
	}
	switch (((p-1) - c+ 3)%3) 
	{
	case 0:printf("�������ł�\n");
		break;
	case 1:printf("�R���s���[�^�̏����ł�\n");
		break;
	case 2:printf("�v���C���[�̏����ł�\n");
		break;
	}
}