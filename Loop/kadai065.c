#include<stdio.h>
main() {
	int sum = 0, i = 0,ken = 0;
	do {
		ken++;
		sum += i;
		printf("����(-999 �ŏI��)?");
		scanf("%d", &i);

	} while (i != -999);
	ken--;
	printf("���v = %d\n", sum);
	printf("���� = %f",(float) sum / ken);
}