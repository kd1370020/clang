#include<stdio.h>
main() {
	int i = 0;
	char data1[256] = { "GameSoft" };
	printf("������ = %s",data1);
	do {
		i++;
	} while (data1[i] != '\0');
	printf("\n������ = %d", i);
}