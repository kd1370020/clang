#include<stdio.h>
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);
	if(a >= '0' && a <= '9')
	{
		printf("����");
	}
	else
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
		{
			printf("�A���t�@�x�b�g");
		}
		else
		{
			printf("���̑��̕���");
		}
	}
}