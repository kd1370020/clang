#include<stdio.h>
main()
{
	int a;
	printf("��������:");
	scanf("%d", &a);
	if (a % 4 == 0 && a%100!=0||a%400==0)
	{
		printf("���邤�N�ł�");
	}
	else {
		printf("���邤�N�ł͂���܂���");
	}
}