#include<stdio.h>
main() {
	int i;
	printf("����(-999�œ��͏I��)");
	scanf("%d", &i);
	while (i != -999){
		printf("8�i�� = %o\t 16�i�� = %x\n", i, i);
		printf("����(-999�œ��͏I��)");
		scanf("%d", &i);
	} 
}