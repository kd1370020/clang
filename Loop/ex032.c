#include<stdio.h>
main()
{
	int i, b;
	printf("��������:");
	scanf("%d", &i);
	for (b = 1;b <= 5;b += 1) {
		printf("%d ", i* b);
	}
}