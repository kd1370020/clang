#include<stdio.h>
main() {
	int i = 0;
	char data1[256];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &data1);
	do {
		putchar(data1[i]);
		printf("\n");
		i++;
	} while (data1[i] != '\0');
}