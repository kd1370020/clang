#include<stdio.h>
main()
{
	int s, b, c;
	printf("秒数を入力;");
	scanf("%d", &s);
	if (s > 5000) {
		printf("error");
	}
	else
	{
		if (s < 0) {
			printf("マイナスはエラーです");
		}
		else {
			b = s / 3600;
			s = s % 3600;
			c = s / 60;
			s = s % 60;
			printf("%d時間%d分%d秒", b, c, s);
		}
	}
}