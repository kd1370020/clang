#include<stdio.h>
main() {
	int i = 0;
	char data1[256];
	printf("������́H");
	scanf("%s", &data1);
	do {
		i++;
	} while (data1[i] != '\0');
	printf("\n������ = %s\t������ = %d ����",data1, i);
}