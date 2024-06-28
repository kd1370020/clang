#include<stdio.h>
main()
{
	char a;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A)
	{
		printf("‘å•¶Žš‚Å‚·");
	}
	else
	{
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}