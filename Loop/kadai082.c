#include<stdio.h>
main() {
	int i = 0, sum = 0, ken = 0;
	while (i != -999) {
		printf("\n����(-999�ŏI��)");
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
	printf("���v�@=�@%d\n���ρ@=�@%.3f", sum,(float) sum / ken);
}