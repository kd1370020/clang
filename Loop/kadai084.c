#include<stdio.h>
main() {
	int i, j;
	while (1) {
		printf("�����P(-999�ŏI��)");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("�����Q(-999�ŏI��)");
		scanf("%d", &j);
		if (j == 0) {
			continue;
		}
		if (j == -999) {
			break;
		}
		printf("%d / %d = %d\n", i, j, i / j);
	}
}