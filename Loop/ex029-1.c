#include<stdio.h>
main()
{
	int a;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &a);
	if (a >= 0) {
		while (a != 0)
		{
			a -= 1;
			printf("*");
		}
	}
	else {
		printf("error");
	}
}