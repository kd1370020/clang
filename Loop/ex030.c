#include<stdio.h>
main()
{
	int a ,i=0;
	printf("数を入れて:");
	scanf("%d", &a);
	while (i <= 10)
	{
		printf("%d + %d = %d\n",a,i,a+i);
		i ++;
	}
}