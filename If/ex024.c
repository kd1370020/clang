#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A)
	{
		printf("大文字です");
	}
	else
	{
		printf("その他の文字です");
	}
}