#include<stdio.h>
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A)
	{
		printf("�啶���ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
}