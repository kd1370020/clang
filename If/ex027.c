#include<stdio.h>
main()
{
	char a,d='a',e='z',f='A',g='Z';
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &a);
	if (a >= d && a <= e)
		{
			printf("•ÏŠ·‚·‚é‚Æ%c",a - 32);
		}
	else
		{
			if (a >= f && a <= g)
			{
				printf("•ÏŠ·‚·‚é‚Æ%c",a + 32);
			}
			else 
			{
				printf("error");
			}
		}
}