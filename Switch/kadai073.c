#include<stdio.h>
main() {
	int i;
	char data;
	printf("�P�O�i���̐����H");
	scanf("%d", &i);
	printf("\n�A���t�@�x�b�g(o or h or d)?");
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