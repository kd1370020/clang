#include<stdio.h>
#include<string.h>
#define SIZE 8
void sort(int* date, int oda);

main() {
	int date[SIZE] = { 6,10,8,2,9,5,1,7 };
	int i;
	char str[256];
	printf("�\�[�g���������:");
	gets(str);
	if (strcmp(str,"����") == 0) {
		sort(date, 0);
	}
	else if(strcmp(str,"�~��")==0) {
		sort(date, 1);
	}
	else {
		printf("�\�[�g�����́A�������~���œ��͂��Ă�������\n");
	}
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", date[i]);
	}
}

void sort(int *date, int oda) {

	int i, j, k;
	switch (oda) {
		case 0: for (i = 0;i < SIZE -1;i++) {
			for (j = i + 1;j < SIZE; j++) {
				if (*(date + i) > *(date + j)) {
					k = *(date + i);
					*(date + i) = *(date + j);
					*(date + j) = k;
				}
			}
		}
			  break;
		case 1: for (i = 0;i < SIZE -1;i++) {
			for (j = i + 1;j < SIZE;j++) {
				if (*(date + i) < *(date + j)) {
					k = *(date + i);
					*(date + i) = *(date + j);
					*(date + j) = k;
				}
			}
		}
	}
}