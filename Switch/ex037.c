#include<stdio.h>
main()
{
	char i;
	printf("���Z�q������:");
	scanf("%c", &i);
	switch (i)
	{
	case '+':printf("���Z�ł�");
		break;
	case'-':printf("���Z�ł�");
		break;
	case '*':printf("��Z�ł�");
		break;
	case'/':printf("���Z�ł�");
		break;
	case '%':printf("���܂�ł�");
		break;
	default: printf("���̑��ł�");
	}
}