#include<stdio.h>
main()
{
	int a = 0, sum=0,i=0;
	/*printf("”‚Í?:");
	scanf("%d", &a);
	for (i = 0, sum = 0;a != -999;i++)
	{
		sum += a;
		printf("”‚Í?:");
		scanf("%d", &a);
	}*/
	do {
		sum += a;
		printf("”‚Í?:");
		scanf("%d", &a);
		if (a == -999) break;
		i++;
	} while (a!=-999);
	printf("‡Œv = %d\t•½‹Ï = %.2f\n", sum, (float)sum / i);
}