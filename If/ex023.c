#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("秒数を入力;");
	scanf("%d", &a);
	if (a > 5000) {
		printf("error");
	}
	else {
		b = a / 3600;
		c = (a - b*3600) / 60;
		d = a - b *3600 - c * 60;
		printf("%d時間%d分%d秒", b, c, d);
	}
}