#include<stdio.h>
#define SIZE 5
main() {
	int d[5] = { 30,7,25,16,10 }, i, j,w;
	printf("ソート前\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
	for (i = 1;i <SIZE;i++) {
		for (j =i-1;j >=0;j--) {
			if (d[j] > d[j+1]) {
				w = d[j+1];
				d[j+1] = d[j];
				d[j] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0;i < SIZE;i++) {
		printf(" %d ", d[i]);
	}
}