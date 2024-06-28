#include<stdio.h>
main()
{
	int a;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &a);
	if (a % 4 == 0 && a%100!=0||a%400==0)
	{
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}