#include<stdio.h>
main()
{
	char a,d='a',e='z',f='A',g='Z';
	printf("���������:");
	scanf("%c", &a);
	if (a >= d && a <= e)
		{
			printf("�ϊ������%c",a - 32);
		}
	else
		{
			if (a >= f && a <= g)
			{
				printf("�ϊ������%c",a + 32);
			}
			else 
			{
				printf("error");
			}
		}
}