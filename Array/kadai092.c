#include<stdio.h>
main()
{
	int c[10],i;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	printf("配列aから配列cにコピー");
	printf("配列a =");
	for (i = 0;i < 10;i++) {
		printf("%d ", a[i]);
		c[i] = a[i];
	}
	printf("\n配列c =");
	for (i = 0;i < 10;i++) {
		printf("%d ", c[i]);
	}
}