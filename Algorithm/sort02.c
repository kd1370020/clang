#include<stdio.h>
#define SIZE 5
main() {
	int d[5] = { 30,7,25,16,10 }, i, j,w;
	printf("�\�[�g�O\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
	for (i = SIZE-1;i >0;i--) {
		for (j =0;j < i;j++) {
			if (d[j] > d[j+1]) {
				w = d[j+1];
				d[j+1] = d[j];
				d[j] = w;
			}
		}
	}
	printf("\n�\�[�g��\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
}