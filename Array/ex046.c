#include<stdio.h>
main()
{
	int i, gokei, a[][3] = { {10,20,30},{1,2,3} },j;
	for (j = 0;j <= 1;j++) {
		for (gokei = 0, i = 0;i <= 2;i++) {
			printf("a[j][%d] = %d\n", i, a[j][i]);
			gokei = gokei + a[j][i];
		}
		printf("%ds‚Ì‡Œv = %d\n",j, gokei);
	}
}