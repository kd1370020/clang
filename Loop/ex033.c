#include<stdio.h>
main()
{
	int a = 0, sum=0,i=0;
	/*printf("数は?:");
	scanf("%d", &a);
	for (i = 0, sum = 0;a != -999;i++)
	{
		sum += a;
		printf("数は?:");
		scanf("%d", &a);
	}*/
	do {
		sum += a;
		printf("数は?:");
		scanf("%d", &a);
		if (a == -999) break;
		i++;
	} while (a!=-999);
	printf("合計 = %d\t平均 = %.2f\n", sum, (float)sum / i);
}