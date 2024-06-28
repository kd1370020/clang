#include<stdio.h>
main() {
	int i = 0,j = 0;
	char data1[256];
	char data2[256];
	printf("•¶š—ñ‚P‚ÍH");
	scanf("%s", &data1);
	printf("•¶š—ñ‚Q‚ÍH");
	scanf("%s", &data2);
	do {
		i++;
	} while (data1[i] != '\0');
	do {
		data1[i] = data2[j];
		j++;
		i++;
	} while (data2[j] != '\0');
	data1[i] = '\0';
	printf("\n•¶š—ñ = %s",data1);
}