#include<stdio.h>
#define SIZE 8
main() {
	int d[SIZE] = { 70,60,80,50,40,20,30,10}, i, j,w,gap;
	printf("ソート前\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
	printf("\n");
	for (gap = SIZE / 2;gap > 0;gap /= 2) {
		for (i = gap;i < SIZE;i++) {
			for (j = i -gap;j >= 0;j-=gap) {
				for (int k = 0;k < SIZE;k++) {
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j +gap] < d[j]) {
					w = d[j+gap];
					d[j+gap] = d[j];
					d[j] = w;
				}
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
}