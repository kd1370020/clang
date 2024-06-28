#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	if(a >= '0' && a <= '9')
	{
		printf("数字");
	}
	else
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		{
			printf("アルファベット");
		}
		else
		{
			printf("その他の文字");
		}
	}
}