#include<stdio.h>
main()
{
	int a = 0, sum=0,i=0;
	/*printf("����?:");
	scanf("%d", &a);
	for (i = 0, sum = 0;a != -999;i++)
	{
		sum += a;
		printf("����?:");
		scanf("%d", &a);
	}*/
	do {
		sum += a;
		printf("����?:");
		scanf("%d", &a);
		if (a == -999) break;
		i++;
	} while (a!=-999);
	printf("���v = %d\t���� = %.2f\n", sum, (float)sum / i);
}