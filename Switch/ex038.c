#include<stdio.h>
main()
{
	int i;
	printf("���������:");
	scanf("%d", &i);
	i /= 10;
	switch (i)
	{
	case 1: printf("10�_��ł�");
		break;
	case 2 :printf("20�_��ł�");
		break;
	case 3 :printf("30�_��ł�");
		break;
	case 4 :printf("40�_��ł�");
		break;
	default: printf("error");
	}
}