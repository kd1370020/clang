#include<stdio.h>
main() {
	int i, j;
	char c;
	printf("®”1H");
	scanf("%d", &i);
	printf("®”2H");
	scanf("%d", &j);
	printf("‰‰Zq?");
	scanf(" %c", &c);

	switch (c)
	{
	case  '+': printf("%d + %d = %d", i, j, i + j);
		break;
	case '-': printf("%d - %d = %d", i, j, i - j);
		break;
	case  '*': printf("%d * %d = %d", i, j, i * j);
		break;
	case '/': printf("%d / %d = %d", i, j, i / j);
		break;
	case '%': printf("%d % %d = %d", i, j, i % j);
		break;
	}
}