#include<stdio.h>
void hhh(int a[], int* d, int* e);

main() {
	int a[3], d, e;
	printf("整数を3つ入力:");
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	hhh(a, &d, &e);
	printf("最大値 = % d 最小値 =  %d",d,e);
}

void hhh(int a[], int* d, int* e) {
	*d = a[0];
	*e = a[0];
	for (int i = 0;i < 3;i++) {
		if (*d <= a[i]) {
			*d = a[i];
		}
		if (*e >= a[i]) {
			*e = a[i];
		}
	}
}