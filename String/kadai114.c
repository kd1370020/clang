#include<stdio.h>
main() {
	int i = 0;
	char data1[256];
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &data1);
	do {
		i++;
	} while (data1[i] != '\0');
	printf("\n•¶š—ñ = %s\t•¶š” = %d •¶š",data1, i);
}