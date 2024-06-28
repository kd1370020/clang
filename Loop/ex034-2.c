#include<stdio.h>
main()
{
	int i = 0, a = 0, b;
	printf("”‚Í?");
	scanf("%d", &i);
	do {
		i--;
		b = 5;
		do {
			b--;
			printf("*");
		} while (b > 0);
		printf("\n");
	} while (i>0);
}