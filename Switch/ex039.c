#include<stdio.h>
main()
{
	int a, b, c,max=0,min=999;
	char i;
	printf("処理を入力:");
	scanf("%c", &i);
	printf("\n整数を入力:");
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
	case 'd':printf("最大値は%dです",max);
		break;
	case 's':printf("最小値は%dです",min);
		break;
	case 'g':printf("合計は%dです",a+b+c);
		break;
	case 'h':printf("平均は%fです",(a+b+c)/3.0);
		break;
	default:printf("error");
	}
}