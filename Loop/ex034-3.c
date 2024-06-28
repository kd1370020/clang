#include<stdio.h>
main()
{
	int i = 0,a =0,b;
	printf("êîÇÕ?");
	scanf("%d", &i);
	do {
		b = 0;
		do {
			b++;
			printf("*");
			} while (b <= a);
		printf("\n");
		a++;
	} while (a < i);
}