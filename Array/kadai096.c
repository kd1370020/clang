#include<stdio.h>
main()
{
	int c[10],i;
	for (i = 0;i < 10;i++) {
		printf("����(-999�ŏI��)");
		scanf("%d", &c[i]);
		if (c[i] == -999) {
			break;
		}
	}
	printf("�z�� c =");
	for (i = 0;i < 10; i++) {
		printf("%d ", c[i]);
		if (c[i] == -999) {
			break;
		}
	}
}