#include<stdio.h>
main()
{
	int a, i = 0;
	printf("��������:");
	scanf("%d", &a);
	if (a >= 0) {
		while (i != a)
		{
			i += 1;
			printf("*");
		}
	}
	else {
		printf("error");
	}
}