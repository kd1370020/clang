#include<stdio.h>
main()
{
	int a;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &a);
	if (a == 1 || a == 3 ||a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
	{
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else
	{
		if (a == 2)
		{
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
		else
		{
			if (a == 4 ||a == 6 || a == 9 || a == 11)
			{
				printf("ÅI“ú‚Í30“ú‚Å‚·");
			}
			else
			{
				printf("error");
			}
		}
	}
}