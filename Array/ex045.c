#include<stdio.h>
main()
{
	int i, gokei, a[][3] = { {10,20,30},{1,2,3} };
	for (gokei = 0, i = 0;i <= 2;i++) {
		printf("a[0][%d] = %d\n", i, a[0][i]);
		gokei = gokei + a[0][i];
	}
	printf("0行の合計 = %d\n", gokei);
	for (gokei = 0, i = 0;i <= 2;i++) {
		printf("a[1][%d] = %d\n", i, a[1][i]);
		gokei = gokei + a[1][i];
	}
	printf("1行の合計 = %d", gokei);
}