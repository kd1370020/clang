#include<stdio.h>
main() {
	int i = 1, sum = 0, ken = 0;
	printf("%d", i);
	sum = i;
	do {
		i++;
		sum += i;
		printf(" + %d",i);
	} while (sum <= 300);
	printf("= %d", sum);
}