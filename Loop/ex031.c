#include<stdio.h>
main()
{
	int i, kei = 0;
	for(i=1;i<=10;i++ )
	{
		kei += i;
		printf("1から%dまでの和 = %d\n", i, kei);
	}
}