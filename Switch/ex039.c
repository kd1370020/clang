#include<stdio.h>
main()
{
	int a, b, c,max=0,min=999;
	char i;
	printf("���������:");
	scanf("%c", &i);
	printf("\n���������:");
	scanf("%d %d %d", &a, &b, &c);
	if (i < a) {
		i += 32;
	}
	if (max < a) { max = a; }
	if (max < b) { max = b; }
	if (max < c) { max = c; }
	if (min > a) { min = a; }
	if (min > b) { min = b; }
	if (min > c) { min = c; }
	switch (i)
	{
	case 'd':printf("�ő�l��%d�ł�",max);
		break;
	case 's':printf("�ŏ��l��%d�ł�",min);
		break;
	case 'g':printf("���v��%d�ł�",a+b+c);
		break;
	case 'h':printf("���ς�%f�ł�",(a+b+c)/3.0);
		break;
	default:printf("error");
	}
}