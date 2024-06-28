#include<stdio.h>
main() {
	int i;
	char data;
	printf("１０進数の整数？");
	scanf("%d", &i);
	printf("\nアルファベット(o or h or d)?");
	scanf("%c", &data);
	switch (data)
	{
	case 'o': printf("%o", i);
		break;
	case 'h': printf("%x", i);
		break;
	case 'O': printf("%o", i);
		break;
	case 'H': printf("%x", i);
		break;
	default : printf("%d", i);
	}
}