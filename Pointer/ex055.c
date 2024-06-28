#include<stdio.h>
#define B_SIZE 4
main() {
	int a[6] = { 11,22,33,44,55,66 }, i;
	int* p_a;
	float b[4] = { 11.1,22.2,33.3,44.4};
	float* p_b;
	float sum;
	p_a = a;
	for (i = 0, sum = 0;i < sizeof a / sizeof(int);i++,p_a++) {
		sum += *p_a;
	}
	printf("配列a\t合計 = %d\t平均 = %.3f\n", (int)sum, (float)sum / sizeof a / sizeof(int));
	p_b = b;
	for (i = 0, sum = 0;i < B_SIZE;i++,p_b++) {
		sum += *p_b;
	}
	printf("配列b\t合計 = %.3f\t平均 = %.3f\n", sum, (float)sum / B_SIZE);
}