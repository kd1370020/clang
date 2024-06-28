#include<stdio.h>
main() {
	int i = 0, sum = 0, ken = 0;
	while (i != -999) {
		printf("\n整数(-999で終了)");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		if (i < 0) {
			continue;
		}
		sum += i;
		ken++;
	}
	printf("合計　=　%d\n平均　=　%.3f", sum,(float) sum / ken);
}