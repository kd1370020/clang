#include<stdio.h>
main()
{
	int i,a =0;
	do {
		printf("数を入れて:");
		scanf("%d", &i);
		if (i == -999) break;
		a += i;
	} while (1);
		printf("合計=%d", a);
}