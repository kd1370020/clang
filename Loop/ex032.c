#include<stdio.h>
main()
{
	int i, b;
	printf("数を入れて:");
	scanf("%d", &i);
	for (b = 1;b <= 5;b += 1) {
		printf("%d ", i* b);
	}
}