#include<stdio.h>
main() {
	int s = 55, i;
	int d[11] = {10,5,30,77,16,3,47,29,37,33};
	for (i = 0;i < 10;i++) {
		printf("%d ", d[i]);
	}
	printf("\n探索値を入力");
	scanf("%d", &s);
	d[11] = s;
	for (i = 0;s!=d[i];i++) {}
	if (i >= 11) {
		printf("見つからなかった");
	}
	else {
		printf("%d番目", i);
	}
}