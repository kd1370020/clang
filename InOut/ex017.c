#include<stdio.h>
main()
{
	float a, b,c;
	printf("1つ目の実数 :");
	scanf("%f", &a);
	printf("2つ目の実数 :");
	scanf("%f", &b);
	printf("3つ目の実数 :");
	scanf("%f", &c);
	printf("合計=%.3f 平均=%.3f", a + b + c, (a + b + c) / 3);
}