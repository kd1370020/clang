#include<stdio.h>
main()
{
	int i;
	float sum, box[3];
	printf("実数を入力:");
	scanf("%f", &box[0]);
	printf("実数を入力:");
	scanf("%f", &box[1]);
	printf("実数を入力:");
	scanf("%f", &box[2]);
	for (i = 0,sum=0;i <= 2;i++) {
		sum += box[i];
	}
	printf("合計は%.1fです\n平均は%.1fです", sum,sum/3);
}