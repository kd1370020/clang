#include<stdio.h>
main() {
	int date, sum = 0, cnt = 0;
	int ret;
	printf("���� :");
	ret = scanf("%d", &date);
	while (ret != EOF) {
		cnt++;
		sum += date;
		printf("\n���� :");
		ret = scanf("%d", &date);
	}
	printf("\n���v =  %d", sum);
	printf("\t���� = %.2f", (float)sum / cnt);
}