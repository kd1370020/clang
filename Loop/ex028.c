#include<stdio.h>
main()
{
	int gokei, ia = 0;
	gokei = 0;
	while (ia != -999)
	{
		gokei += ia;
		printf("��������:");
		scanf("%d", &ia);
	}
	printf("���v=%d", gokei);
}