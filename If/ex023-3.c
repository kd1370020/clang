#include<stdio.h>
main()
{
	int a, b, c;
	printf("���Z�q�����:");
	scanf("%d", &a);
	printf("�Q�̐��������:");
	scanf("%d %d", &b, &c);
	if (a == 1)
	{
		printf(" % d", b + c);
	}
	else
	{
		if (a == 2)
		{
			printf("%d", b - c);
		}
		else 
		{
			if (a == 3) 
			{
				printf("%d", b * c);
			}
			else 
			{
				if (a == 4)
				{
					printf("%d",b / c);
				}
				else 
				{
					printf("error");
				}
			}
		}
	}
}