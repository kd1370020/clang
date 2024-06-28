#include<stdio.h>
#define SIZE 5
main() {
	int d[5] = { 30,7,25,16,10 }, i, j,w;
	printf("ソート前\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
	for (i = 0;i < SIZE - 1;i++) {
		for (j = i + 1;j < SIZE;j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
}