#include<stdio.h>
main()
{
	int i,a =0;
	do {
		printf("��������:");
		scanf("%d", &i);
		if (i == -999) break;
		a += i;
	} while (1);
		printf("���v=%d", a);
}