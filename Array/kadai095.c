#include<stdio.h>
main() {
	int sum = 0;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	for (int i = 0;i < 10;i++) {
		sum += a[i];
	}
	printf("合計　= %d\t平均 = %d", sum, sum / 10);
	sum = 0;
	for (int i = 0;i < 10;i++) {
		sum += b[i];
	}
	printf("\n合計　= %d\t平均 = %d", sum, sum / 10);
}