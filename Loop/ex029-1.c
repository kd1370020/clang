#include<stdio.h>
main()
{
	int a;
	printf("数を入れて:");
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