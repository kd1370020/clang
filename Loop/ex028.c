#include<stdio.h>
main()
{
	int gokei, ia = 0;
	gokei = 0;
	while (ia != -999)
	{
		gokei += ia;
		printf("数を入れて:");
		scanf("%d", &ia);
	}
	printf("合計=%d", gokei);
}