#include<stdio.h>
main()
{
	char a,d='a',e='z',f='A',g='Z';
	printf("文字を入力:");
	scanf("%c", &a);
	if (a >= d && a <= e)
		{
			printf("変換すると%c",a - 32);
		}
	else
		{
			if (a >= f && a <= g)
			{
				printf("変換すると%c",a + 32);
			}
			else 
			{
				printf("error");
			}
		}
}