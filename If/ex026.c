#include<stdio.h>
main()
{
	int a;
	printf("�������:");
	scanf("%d", &a);
	if (a == 1 || a == 3 ||a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
	{
		printf("�ŏI����31���ł�");
	}
	else
	{
		if (a == 2)
		{
			printf("�ŏI����28���ł�");
		}
		else
		{
			if (a == 4 ||a == 6 || a == 9 || a == 11)
			{
				printf("�ŏI����30���ł�");
			}
			else
			{
				printf("error");
			}
		}
	}
}