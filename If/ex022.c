#include<stdio.h>
main()
{
	int nen;
	printf("西暦を入力:");
	scanf("%d", &nen);
	if (nen <= 1988) {
		printf("昭和生まれです");
	}
	else {
		printf("平成生まれです");
	}
}