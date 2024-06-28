#include<stdio.h>
main() {
	int i = 1, sum, ken = 0;
	printf("%d", i);
	sum = i;
	while (sum <= 300) {
		i++;
		sum += i;
		printf("+%d",i);
	}
	printf("= %d", sum);
}